#include<stdio.h>
#include<math.h>
int main()
{   
    float x,fact,p,count=1;
    int i;
    printf("enter the value of x:");
    scanf("%f",&x);
    for(i=2;i<=sqrt(x);i++)
    {
        fact=x/i;
        p=pow(fact,1/2);
        if(p%i!=0)
        {
            count++;
        }
    }
    printf("%f",count++);
}