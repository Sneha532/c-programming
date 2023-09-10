#include<stdio.h>
int main()
{
    int n,p,reverse=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        reverse=(reverse*10)+p;
        n=n/10;
    }
    printf("ans=%d",reverse);
    if(n==reverse)
    printf("this is a palindrome number");
    else
    printf("this is not a palindrome number");
}