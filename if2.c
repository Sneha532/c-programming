#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    if((a>10)&&(b<5))
       x=a+b;
    else
       x=0;
    printf("%d\n",x);
    return 0;
}