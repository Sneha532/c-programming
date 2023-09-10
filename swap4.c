#include<stdio.h>
int main()
{
    unsigned int a,b,dif=0;
    printf("Enter the value of a is ");
    scanf("%d",&a);
    printf("Enter the value of b is ");
    scanf("%d",&b);
    dif=a-b;
    a=a-dif;
    b=b+dif;
    printf("the value of a is %d",a);
    printf("The value of b is %d",b);
    return 0;

}