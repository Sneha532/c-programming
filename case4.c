#include<stdio.h>
int main()
{
    double max=0.0,next;
    printf("enter a positive numbers only,end with 0 or a negetive number\n");
    scanf("%lf",&next);
    while(next>0)
    {
        if(next>max) max=next;
        scanf("%lf",&next);
    }
    printf("The maximum number is %lf\n",max);
    return 0;
}