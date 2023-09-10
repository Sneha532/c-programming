#include<stdio.h>
float my_func(float a)
{
    float i,x=1;
    for(i=1;i<a;i++)
    {
        x=x*i;
    }
    return (x);
}
int main()
{
    float n,r,ncr;
    scanf("%d%d",&n,&r);
    ncr=my_func(n)/(my_func(r)*my_func(n-r));
    printf("%d",ncr);
}