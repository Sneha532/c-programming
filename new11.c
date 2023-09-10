#include<stdio.h>
int main()
{
    int A[100],i,n,x,prv=0,max,min;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
  {
         scanf("%d",&A[i]);
         if(A[i]>prv)
      {
        max=A[i];
     //   min=prv;

      }
       else
       {
        max=prv;
//       min=A[i];
        }
         prv=max;
  }
     
    
       printf("%d",max);
}