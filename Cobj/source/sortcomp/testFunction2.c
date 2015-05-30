#include <stdio.h>

int add(int x, int y) {  return x + y; }

int square(int x) {  return x * x;  }

float div(float x, float y) {  return x / y;  }

int main()
{
    void (* pfunc)(void);
    int x = 10;
    int y = 4;
    
    printf("x = %d, y = %d\n", x, y);

    pfunc = (void (*)())add;
    printf("pfunc(add)    : %d\n", ((int (*)(int, int))pfunc)(x, y));

    pfunc = (void (*)())square;
    printf("pfunc(square) : %d\n", ((int (*)(int))pfunc)(x));
    
    pfunc = (void (*)())div;
    printf("pfunc(div)    : %.2f\n", ((float (*)(float, float))pfunc)((float)x, (float)y));

    return 0;
}
