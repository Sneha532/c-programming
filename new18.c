#include<stdio.h>
int main()
{
    int i,A[100],B[100],C[100],n,pivot,c=0,j=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    pivot=A[3];
    for(i=0;i<n;i++)
    {
        if(A[i]<A[3])
        {
            B[j]=A[i];
             j++;
            c++;

        }
        else if(A[i]>A[3])
        {
             c[k]=A[i];
             k++;
            c1++;

        }

    }
    
    for(i=0;i<c;i++)
    printf("%d",B[i]);
    for(i=0;i<c1,i++)
    {
        printf("%d",C[i]);
    }
}