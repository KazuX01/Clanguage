#include<stdio.h>
#include<time.h>
typedef int Align;
union header {
	struct {
		union header *ptr;
		unsigned size;
	} s;
	Align x;
};
typedef union header Header;
void *malloc(unsigned);
void free(void *);
static Header *freep = NULL;
main()
{
	clock_t sta = clock(), end;
	char * sbrk(int);
	printf("Address of End of Heep = %p\n", sbrk(0));
	int *p = (int *)malloc(4), *y = (int *)malloc(4); 
	*p = 7, *y = 8;
	printf("Address = %p   Value = %d\n", p, *p);      
	printf("Address = %p   Value = %d\n", y, *y);      
	printf("Address of End of Heep = %p\n", sbrk(0));
	Header *z = (Header *)(p-2); 
	
	printf("point = %p\n", z);
	printf("BlockInfo nextpoint=%p  size=%d\n", z->s.ptr, z->s.size);	
	printf("freekInfo address=%p  nextpoint=%p  size=%d\n", freep, freep->s.ptr, freep->s.size);	
	free(p);
	printf("freekInfo address=%p  nextpoint=%p  size=%d\n", freep, freep->s.ptr, freep->s.size);	
	end = clock();
	printf("Time_second = %.3f\n", (double)(end - sta)/CLOCKS_PER_SEC);


}



static Header base;
static Header *morecore(unsigned nu);
void *malloc(unsigned nbytes)
{
	Header *p, *prevp;
	unsigned nunits;

	nunits = (nbytes+sizeof(Header)-1)/sizeof(Header) + 1;
	if ((prevp = freep) == NULL) {
		base.s.ptr = freep = prevp = &base;
		base.s.size = 0;
	}
	for (p = prevp->s.ptr; ; prevp = p, p = p->s.ptr){
		if (p->s.size >= nunits) {
			if (p->s.size == nunits)
				prevp->s.ptr = p->s.ptr;
			else {
				p->s.size -= nunits;
				p += p->s.size;
				p->s.size = nunits;
			}
			freep = prevp;
			return (void *)(p+1);
		}
		if (p == freep)
			if ((p = morecore(nunits)) == NULL)
				return NULL;
	}
}


#define NALLOC 1024
static Header *morecore(unsigned nu)
{
	char *cp, *sbrk(int);
	Header *up;

	if (nu < NALLOC)
		nu = NALLOC;
	cp = sbrk(nu * sizeof(Header));
	if (cp == (char *) -1)
		return NULL;
	up = (Header *) cp;	
	up->s.size = nu;
	free((void *)(up+1));
	return freep;
}


void free(void *ap)
{
	Header *bp, *p;

	bp = (Header *)ap - 1;
	for (p = freep; !(bp > p && bp < p->s.ptr); p = p->s.ptr)
		if (p >= p->s.ptr && (bp > p || bp < p->s.ptr))
			break;

	if (bp + bp->s.size == p->s.ptr) {
		bp->s.size += p->s.ptr->s.size;
		bp->s.ptr = p->s.ptr->s.ptr;
	} else
		bp->s.ptr = p->s.ptr;
	if (p + p->s.size == bp) {
		p->s.size += bp->s.size;
		p->s.ptr = bp->s.ptr;
	} else 
		p->s.ptr = bp;
	freep = p;
}
