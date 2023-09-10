#include<stdio.h>
int main()
{
    int x[5]={45,67,34,12,23};
    int *p;
    p=&x[1];
    printf("%d",*p);
    p++;
    printf("%d",*p);
    p=p+2;
    printf("%d",*p);
    
}