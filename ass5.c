#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter a value of n :");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("its not a prime no");
    }
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
     {
       flag=1;
       break;
     }
    }
    if(flag==1)
    
    printf("it is not a prime number");
    
    else
    printf("it is a prime number");
    

}