#include<stdio.h>
int fact(int x)
{
    int i=1,factorial=1;
    for(i=1;i<=x;i++)
    {
        factorial*=i;

    }
    return factorial;
}
int main()
{
    int n,i,p,ncr,r;
    scanf("%d%d",&n,&r);
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_p=fact(n-r);
    ncr=fact_n/(fact_r*fact_p);
    printf("%d",ncr);
}