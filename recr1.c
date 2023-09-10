#include<stdio.h>
int Factorial(int X)
{
    int i,fact;
    if(X==0)
    return 0;
    else
    {
        for(i=X;i>0;i=i-1)
        {
        fact=fact+X*Factorial(X-1);
        }
        return fact;
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",Factorial(x));

}