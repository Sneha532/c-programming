#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    int sum=0;
    printf("enter a value of x which goes 1 upto x:");
    scanf("%d",&x);
    for(i=1;i<=x;)
    {
        sum=sum+pow(i,2)+pow(i+1,3)+pow(i+2,0.5)+pow(i+3,2);
        i=i+4;
        
    }
    printf("%d",sum);
}