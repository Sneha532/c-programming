#include<stdio.h>
int gcd(int a,int b)
{
    int r;

  if(a>b)
    {
        r=a;a=b;b=r;
    }
    while((b%a)!=0)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return a;
}
    int main()
 {
             int a,b;
            scanf("%d%d",&a,&b);
            printf("gcd=%d",gcd(a,b));
            return 0;
 }
    

