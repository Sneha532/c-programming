#include<stdio.h>
int main()
{
    int A[90],B[90],i,n=0,N,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
       {
           if(A[j]==A[i])
         {
           for(k=j;k<n;k++)
           {
             {
                A[k]=A[k+1];
             }
              N--;
             }
               else
               {
               j++;
               }
            }
        }

    }
for(i=0;i<N;i++)
{
    printf("%d",A[i]);
    
}

}