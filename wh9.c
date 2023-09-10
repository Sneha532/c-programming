#include<stdio.h>
int main()
{
    int n,prod,count;
    scanf("%d",&n);
    for(prod=1;count<=n;++count)
     prod=prod*count;

    printf("result is=%d",prod);
    return 0;
}