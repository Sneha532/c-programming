#include<stdio.h>
int main()
{
    double money=10000.0;
    int n=0;
    while(money<20000.0)
    {
        money=(money*1.01);
        n++;
    }
    printf("money will double in =%d months",n);
    return 0;
}