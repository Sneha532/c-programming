#include<stdio.h>
int main()
{
    int x,y,z;
    float a,b;
     x=10;
     y=2.3;
     z=3;
     a=2.5;
     b=3.14;
     x=y+x/a*b/z-a;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}