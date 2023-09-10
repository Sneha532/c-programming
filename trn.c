#include<stdio.h>
int main()
{
    int salary,x;
    scanf("%d",&x);
    salary=(x<40)?(4*x+100):((x>40)?(4.5*x+1.50):300);
    printf("%d",salary);

}