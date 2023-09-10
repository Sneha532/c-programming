#include<stdio.h>
int main()
{
    int n,count0=0,count1=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        {
        if(n&1)
        count1++;
        else
        count0++;
        }
    n=n>>1;
    }
    printf("%d",count1);
    printf("%d",count0);

}
