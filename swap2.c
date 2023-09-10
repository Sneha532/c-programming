#include<stdio.h>
int main()
{
    int a,b;
    signed int dif;
    printf("enter the value of a and b");
    dif=a-b;
    a=a-dif;
    b=b+dif;
    printf("%d %d",a,b);
    return 0;
}