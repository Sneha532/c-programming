#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],i,j,n,C[100][100];
    printf("enter the no of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[100][100]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&B[100][100]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        C[i][j]=0;
        for(j=0;j<n;j++)
        {
        C[i][j]+=A[i][j]*B[j][i];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",C[i][j]);
        }
    }
}