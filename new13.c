#include<stdio.h>
int main()
{

    int A[100],i,n,sum=0,prv_num=0,org_no,B[100],C[100];
    printf("enter the no of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
        printf("%d",sum);
        B[i]=sum;
    }
    for(i=0;i<n;i++)
    printf("%d",B[i]);
    for(i=0;i<n;i++)
    {
        org_no=B[i]-prv_num;
        prv_num=B[i];
        C[i]=org_no;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",C[i]);
    }
}