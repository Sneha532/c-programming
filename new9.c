#include<stdio.h>
int fact(int a)
{
    int i,factorial=1;
    for(i=1;i<=a;i++)
    
    {
        factorial*=i;
    }
    return factorial;

}
int main()
{
    int n,p,r,ncr;
    scanf("%d%d",&n,&r);
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_p=fact(n-r);
     ncr=fact_n/(fact_p*fact_r);
    printf("%d",ncr);
}