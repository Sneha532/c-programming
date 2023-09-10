#include<stdio.h>
int main()
{
    int sum=0,i,A[24],n,prv_num=0,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    {
      sum+=A[i];
      printf("%d\n",sum);
      A[i]=sum;
    }
     for(i=0;i<n;i++)
     {
        num=A[i]-prv_num;
        printf("%d\n",num);
        prv_num=A[i];
     }
}