#include<stdio.h>
#include<math.h>
int fact(int x)
{
     int i,factorial;
     for(i=1;i<=x;i++)
    {
     factorial*=i;
    }
    return factorial;
}
int main()
{
    int i,j;
    float x,n,sum=0,p=1;
    scanf("%f%f",&x,&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
      {
        if(i%2!=0)
        {
            sum=sum+(((pow(x,i))/i)*pow(-1,j));
        }
      }
    }
    printf("sum=%f",sum);
    return 0;
}