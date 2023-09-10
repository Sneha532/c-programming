#include<stdio.h>
int main()
{
    int avg,a,b,c;
    printf("enter your marks");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("avg=%d",avg);
    return 0;
}