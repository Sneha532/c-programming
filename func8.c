#include<stdio.h>
int main()
{
    int n,N,i,max=0,prv=0,max2=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
         scanf("%d",&n);
         if(n>prv)
         {
           max=n;
           max2=prv;
         }
        else if(n>max2 &&  n!=max )
        {
           max=prv;
           max2=n;
        }
         prv=max;
    }
    printf("max=%d%d",max,max2);
}