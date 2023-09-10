#include<stdio.h>
int main()
{
     int n1,n2,n3,A[100],B[100],C[100],i,j,temp;
     printf("enter the value of n3");
     scanf("%d",&n3);
     printf("enter the value");
     for(i=0;i<n3;i++)
     scanf("%d",&A[i]);
     printf("enter the value of n1");
     scanf("%d",&n1);
    // printf("enter the value of n2");
    // scanf("%d",);
       for(i = 0; i < n3; i++) 
        {
         for (j = i + 1; j < n3; ++j)
            {
 
                if (A[i] > A[j]) 
                {
 
                     temp =  A[i];
                     A[i] = A[j];
                    A[j] = temp;
 
                }
 
            }
 
        } 
        
         for (i = 0; i < n3; i++)
    {
        printf(" %d \n", C[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    A[i]=C[i];
    for(i=n1;i<n3;i++)
    B[i]=C[n1+i];
    for(i=0;i<n1;i++)
    printf("%d",A[i]);
    for(i=n1;i<n3;i++)
    printf("%d",B[i]);
}