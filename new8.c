#include<stdio.h>
#include<math.h>
int fact(int a)
{
      int i,factorial=0;
      for(i=0;i<=a;i++)
      {
      factorial=factorial*i;
      }
      return factorial;
      int main()
      {
        int n,x,i,sum=0;
        scanf("%d%d",&x,&n);
        for(i=0;i<=n;i++)
        sum=sum+(pow(x,i))/fact(i);
        printf("%d",sum);
        
      }
}