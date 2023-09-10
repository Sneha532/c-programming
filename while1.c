#include<stdio.h>
int main()
{
    int N,count,prod;
    scanf("%d",&N);
    prod=1;

    for(count=1;count<=N;count++)
    prod=prod*count;
    printf("%d",prod);

}