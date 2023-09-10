#include<stdio.h>
int main()
{
    int A[100],i,B[100],n,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        B[j]=A[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",B[i]);
    }
}
