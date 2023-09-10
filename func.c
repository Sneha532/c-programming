#include<stdio.h>
int factorial(int x);
int ncr;
int main()
{
    
    
    
   int n,r;
    scanf("%d%d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));

}
int factorial(int x)
    {
    int i=1,fact=1;
    for(i=1;i<=x;i++)
    {
        fact*=i;
    
    return fact;
    }
    }
    printf("%d",ncr);
