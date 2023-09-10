#include<stdio.h>
int main()
{
    int A[90],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=n;i<n;i--)
    {
       printf("%d\n",A[i]);
    }
    
}