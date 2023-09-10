#include<stdio.h>
int main()
{
    int A[78],n,i,prv=0,max,min,prv1=0,index=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    {   `f
        if(A[i]>prv)
        max=A[i];
        else
        {
        max=prv;
        }
        prv=max;
        index=i;
    }
  //  printf("A[%d]=%d\n",index,max);
    for(i=0;i<n;i++)
    {
        if(max==A[i])
        printf("A[%d]=%d\n",i,max);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]<prv1)
        min=A[i];
        else
        {
           min=prv1;
        }
        prv1=min;
        index=i;
    }
   // printf("A[%d]=%d",index,min);
   for(i=0;i<n;i++)
    {
        if(min==A[i])
        printf("A[%d]=%d\n",i,min);
    }

    
}