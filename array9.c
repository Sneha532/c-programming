#include<stdio.h>
int main()
{
    int A[30],B[30],n,i;
        scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        B[n-i-1]=A[i];
    for(i=0;i<n;i++)
    {
        A[i]=B[i];
        printf("%d",A[i]);
    }
}