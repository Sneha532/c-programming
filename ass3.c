#include<stdio.h>
int main()
{
    int n,p,i;
    printf("enter a value of n");
    scanf("%d",&n);
    while(n!=0)
    {
    p=n%10;
    reverse=reverse*10+p;
    printf("%d",p);

    n=n/10;
    }
}