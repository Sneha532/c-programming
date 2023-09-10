#include<stdio.h>
void my_func(int a,int b)
{
    int x;
    x=a;
    a=b;
    b=x;
}
int main()
{
    int a=8,b=9;
    my_func(a,b);
    printf("%d\t%d",a,b);

}