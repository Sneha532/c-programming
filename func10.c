#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("gcd=%d",gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    int r;
    while(b%a!=0)
 {
    if(b>a)
    {
        r=b%a;
        b=a;
        a=r;
    }
 }
 return a;
}


