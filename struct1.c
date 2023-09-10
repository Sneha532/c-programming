#include<stdio.h>
int main()
{
    struct com{
        float real;
        float img;
    }a,b,c;
    scanf("%f%f",&a.real,&a.img);
    scanf("%f%f",&b.real,&b.img);
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    printf("%f+%0.1fj",c.real,c.img);
}