#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,sum=0,s1=0,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of x");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(i==1||(i-1)%4==0||i%4==0)
        sum=sum+pow(x,2);
        
        
     }
    
    printf("%d\n%d\n%d",sum,s,s1);
    
}