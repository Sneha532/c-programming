#include<stdio.h>
float my_func(float a)
{
    float x=1,i;
    for(i=1;i<=a;i++)
    {
        x=x*i;
    }
    return (x);
}
int main()

{
    float ncr,n,r;
    scanf("%f%f",&n,&r);
    ncr=my_func(n)/(my_func(r)*my_func(n-r));
    printf("%f",ncr);
}