#include<stdio.h>
int main()
{
    int A[20],n,i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=0;i<(n/2)+1;i++)
    {
       c=A[i];
       A[i]=A[n-i-1];
       A[n-i-1]=c;
    }
    for(i=0;i<n;i++)
    printf("%d",A[i]);
}