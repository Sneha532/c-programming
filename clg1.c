#include<stdio.h>
int main()
{
    int add,sub,mul,div,mod,a,b;
    char operator;                       
    printf("enter the operator");       //
    scanf("%c",&operator);              //
     scanf("%d %d",&a,&b);              

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    
    switch(operator)
    {
        case '+':
        printf("%d",add);
        break;
        case '-':
        printf("%d",sub);
        break;
        case '*':
        printf("%d",mul);
        break;
        case '/':
        printf("%d",div);
        break;
        case '%':
        printf("%d",mod);
        break;
    }
    return 0;
}
