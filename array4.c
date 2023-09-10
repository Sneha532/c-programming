#include<stdio.h>
int main()
{
    int A[6],i=0,c,n,d;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    d=A[n-1];
        for(i=0;i<n;i=i+2)
    {
        if(n%2==0)
        {
           c=A[i];
           A[i]=A[i+1];
         A[i+1]=c;
        }
       else
       {
          c=A[i];
          A[i]=A[i+1];
            A[i+1]=c;
            A[n-1]=d;
       }
    }
    for(i=0;i<n;i++)
    printf("%d\n",A[i]);
}