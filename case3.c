#include<stdio.h>
int main()
{
    int N,count,sum;
    scanf("%d",&N);
    sum=0;
    count=1;
    while(count<=N)
    {
        sum=sum+count;
        count=count+1;
    }
    printf("sum=%d\n",sum);g
    return 0;
}