#include<stdio.h>
int main()
{
    int A[100][100],i,j,n;
    printf("enter the no of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
                printf("%d\t",A[j][i]);
        }
    }




}