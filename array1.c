#include<stdio.h>
int main()
{
    int n,i,A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=n-1;i>=0;--i)
    printf("%d",A[i]);
    printf("\n");return 0;
    
}