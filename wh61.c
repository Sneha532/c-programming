#include<stdio.h>
int main()
{
    int max=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        if(n>max)
        {
        max=n;
        }
        scanf("%d",&n);
    
       
    }
     printf("maximum number is=%d",max);
    return 0;
}