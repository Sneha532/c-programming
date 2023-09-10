#include<stdio.h>
int main()
{
    int a=10;
    int* x=&a;
    *x=68;
    printf("%p\n",a);
    printf("%p\n",&a);
    printf("%d\n",a);
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    printf("%p\n",x);
}