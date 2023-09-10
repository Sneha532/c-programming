#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    while((b%a)!=0)
    {
        temp=b%a;
        b=a;
        a=temp;
    }
    printf("GCD is=%d",a);
   return 0;
}