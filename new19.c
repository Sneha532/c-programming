#include<stdio.h>
int main()
{
    int i,j,A[100],n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((A[i]+A[j])==9)
            printf("(%d,%d)",A[i],A[j]);
        }
    }

}