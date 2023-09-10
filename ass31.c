#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0,b;
    float a;
    printf("enter thre value of n ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
       if(n%i==0)
       {
           a=sqrt(i);
           b=(int)a;
           if(a!=b)
           {
            count++;
           }
       }

    }
    printf("%d",count);
}