#include<stdio.h>
int main()
{
    int A[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);

    }
    for(i=0;i<n;i++)
    {
        A[i]=A[n-i-1];
    }
    for(i=0;i<n;i++)
    printf("%d",A[i]);
}