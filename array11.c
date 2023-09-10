#include<stdio.h>              //merged two array
int main()
{
    int A[100],B[100],C[100],n1,n3,n2,i,j,temp,count=0;
    printf("enter the value orf n1");
    scanf("%d",&n1);
    printf("enter the value");
    for(i=0;i<n1;i++)
    scanf("%d",&A[i]);
    for(i=0;i<n1;i++)
    C[i]=A[i];
    printf("enter the value of n2");
    scanf("%d",&n2);
    printf("enter the value");
    for(i=0;i<n2;i++)
    scanf("%d",&B[i]);
    //n3=n1+n2;
    for(i=0;i<n2;i++)
    C[n1+i]=B[i];
    n3=n1+n2;
    for(i=0;i<n3;i++)
    printf("%d",C[i]);
    for(i = 0; i < n3; i++) 
        {
         for (j = i + 1; j < n3; ++j)
            {
 
                if (C[i] > C[j]) 
                {
 
                     temp =  C[i];
                     C[i] = C[j];
                    C[j] = temp;
                    count++;
                }

 
            }
 
        }
    for (i = 0; i < n3; i++)
    {
        printf(" %d ", C[i]);
    }
    printf("%d",count);
   
}