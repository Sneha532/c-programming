#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flat;
    scanf("%d",&n);
    if(n==1||n==2)
    {
        printf("it is not a prime number and not a non prime numberr");
    }
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flat=1;
            break;
        }
        
    }
    if(flat==1)
    printf("it is non prime number");
    else
    printf("it is a prime number");

}