#include<stdio.h>
#include<math.h>
int fact(int x)
{
   int i,factorial=1;
   for(i=1;i<=x;i++)
  {
    factorial*=i;
  }
   return factorial;
}
int main()
{
    float p,q,sum,j,i;
    int x,n;
    printf("enter the value of m and n");
    scanf("%d%d",&x,&n);

    for(i=1,j=0;i<=n,j<=n;j++,i=i+2)
    {
         p=pow(x,i);
         q=pow(-1,j);
        sum=sum+p/(fact(i)*q);

    }
       printf("sum=%f",sum);
}