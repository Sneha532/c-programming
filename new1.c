#include<stdio.h>
int main()
{
    int i,reverse=0,n,p,x,y;
    printf("enter the number");
    scanf("%d",&n);
    y=n;
    for( x=n;x>0;x=x/10)
    {
        p=x%10;
        reverse=reverse*10+p;
    }
    printf("%d",reverse);
    if(y==reverse){
    printf("it is a palindrome number");
    }
    else
    printf("it is not a plindrome number");
}