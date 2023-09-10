#include<stdio.h>
int main()
{
    int i;
    for(i=1901;i<=2099;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }
    if(1900%400==0)
        printf("%d\n",1900);
     else if(2100%400==0)
     printf("%d",2100);
    return 0;
}