#include<stdio.h>
#include<math.h>
int main()
{
    float n,p,q,i,x,j,sum=0;
    printf("enter the value of x and n");
    scanf("%f%f",&x,&n);
    for(i=1,j=0;j<=n,i<=n;i++,j++)
    {
        p=pow(x,i);
        q=pow(-1,j);
        sum=sum+p/(i*q);
    }
    printf("sum=%f",sum);
}