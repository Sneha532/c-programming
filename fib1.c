#include<stdio.h>
int main()
{
    int n,sum,i;
    int a=0;
    int b=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
}