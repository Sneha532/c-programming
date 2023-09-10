#include<stdio.h>
int main()
{
    int n1,n2,A[100],B[100],C[100],i,j,k,temp;
     printf("enter the value of n1 and n2");
     scanf("%d%d",&n1,&n2);
     printf("enter the value of array no");
     for(i=0;i<n1;i++)
     {
        scanf("%d",&A[i]);
     }
     for(i=0;i<n1;i++)
     {
        C[j]=A[i];
        j++;
     }
     for(i=0;i<n2;i++)
     {
        scanf("%d",&B[i]);
     }
     for(i=0,j=0;i<n2,j<n2;i++,j++)
     {
         C[j+n1]=B[i];
     }
     for(j=0;j<(n1+n2);j++)
     {
        printf("%d",C[j]);
     }
     for(j=0;j<(n1+n2);j++)
     {
          for(k=j+1;k<(n1+n2);k++)
          {
            if(C[j]>C[k])
            {
                temp=C[j];
                C[j]=C[k];
                C[k]=temp;

            }
          }
     }
     for(j=0;j<(n1+n2);j++)
     {
           printf("%d",C[j]);
     }
}
