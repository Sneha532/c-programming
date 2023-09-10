#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,sum=0,r;
    printf("enter the value of n");
    scanf("%d",&n);
    do
    {
        n=n/10;
        ++count;
    }
    while(n!=0);
    
    while("n!=0")
    {
        r=n%10;
        sum=sum+pow(n,count);
        n=n/10;
    }
    if(sum==n)
    {
        printf("it is an amstrong number ");
    }
    else
    printf("it is not a amstrong number");
    return 0;
}