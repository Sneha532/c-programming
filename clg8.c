                         //QUESTION NO:3(A)
#include<stdio.h>
int main()
{
    long double a;    
    double b;
    float c;
    long int d;
    int e;
    short int f;
    char g;
    printf("enter a char");
    scanf("%c",&g);
    f=g;
    printf("f=%d\n",f);
    b=f;
    printf("b=%lf\n",b);
    a=b;
    printf("a=%lf\n",a);
    c=b;
    printf("c=%f\n",c);
    d=c;
    printf("d=%d\n",d);
    e=d;
    printf("e=%d\n",e);
    return 0;
}