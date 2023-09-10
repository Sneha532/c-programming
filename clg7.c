                            //QUESTION NO:1
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    for(i=15;i>=0;i--)
    {
        if((1<<i) & a)
        {
        printf("1");
        }
        else
        printf("0");
    }
    for(i=15;i>=0;i--)
    {   
        if((1<<i) & b)
        {
        printf("1");
        }
        else
        printf("0");
    }
       printf("output=%d",a & b);
       printf("output=%d",a | b);
       printf("output=%d",a ^ b);   
}
