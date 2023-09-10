                       //QUESTION NO:3(B)
#include<stdio.h>
indt main()
{
   // signed long double a;     //compiler showing error:both signed and double in declaration specifiers....
    signed double b;
    signed float c;
    signed long int d;
    signed int e;
    signed short int f;
    signed char g;
    printf("enter a value of a :");
    scanf("a=%lf");
    b=a;
    printf("b=%lf\n",b);
    c=b;
    printf("c=%f\n",c);
    d=c;
    printf("d=%d\n",d);
    e=d;
    printf("e=%d\n",e);
    f=e;
    printf("f=%d\n");
    g=f;
    printf("g=%c\n",g);
    return 0;
}