#include<stdio.h>
int main()
{
    int amnt,prd;
    float i,x;
    printf("Enter your amount and period:");
    scanf("%d %d",&amnt,&prd);
    printf("Enter the value of interest:");
    scanf("%f",&i);
    x=((amnt*prd*i/100)+amnt);
    printf("total amount=%f",x);
    return 0;
}