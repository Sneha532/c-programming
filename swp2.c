#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a is\n");
    scanf("%d",&a);
    printf("Enter the value of b is\n");
    scanf("%d",&b);
    printf("Enter the value of c is\n");
    scanf("%d",&c);
    d=a;
    a=b;
    b=c;
    c=d;
    printf("after swapping\n");
    printf("value of a %d",a);
    printf("value of b %d",b);
    printf("value of c %d",c);
    return 0;

}