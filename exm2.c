#include<stdio.h>
int main()
{
    int fact=1,i;
    fact=1;
    i=1;
    while(1)
    {
        fact=fact*i;
        if(fact>1000)
        {
        printf("factorial of %d above 1000",i);
        break;
        }
        i++;
        return 0;

    }
}