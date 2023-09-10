#include<stdio.h>
int my_add(int a,int b)
{
    return a+b;
}
int main()
{
     int a,b,sum;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d",my_add(a,b));
}