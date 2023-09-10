#include<stdio.h>
int main()
{
    int balance,interest;
    scanf("%d",&balance);
    interest=(balance>4000)?balance*0.2:balance*0.1;
    printf("%d",interest);
    return 0;
}