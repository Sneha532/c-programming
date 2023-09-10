#include<stdio.h>
#include<math.h>
int main()
{
    int i,count=1;
    float x,fact,p;
    printf("enter the value of x:");
    scanf("%f",&x);
    for(i=2;i<x;i++)
    {
        fact=x/i;
      //  printf("%f\n",fact);
        p=pow(fact,(1/2));
        if(p%2!=0||p%3!=0)
        {
            count++;
        }
    }
    printf("total=%d",count++);
}