long signed_min(long byte)
{
	int i;
	long p, bit;
	bit = byte * 8;
	p = 1;
	for (i =0; i < bit; ++i){
		p = p * 2;
	}
	p = ((p + 1) / 2) * -1;
	return p;
}



long signed_max(long byte)
{
	int i;
	long p, bit;
	bit = byte * 8;
	p = 1;
	for (i = 0; i < bit; ++i) {
		p = p * 2;
	}
	p = ((p - 1) / 2);
	return p;
}
