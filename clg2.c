#include<stdio.h>
#include<math.h>
int main()
{
    int add,sub,mul,div,mod,exp,a,b;
    float p;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    
    printf("add=%d",(a+b));
    printf("sub=%d",(a-b));
    printf("mul=%d",(a*b));
    printf("div=%d",(a/b));
    printf("mod=%d",(a%b));
    printf("p=%f",pow(2.7,a));
    return 0;
}