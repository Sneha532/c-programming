       //QUESTION:1//
#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("enter the value of n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/(1+i);
    }
    printf("%f",sum);
}