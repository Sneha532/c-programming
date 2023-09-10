#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,count=0,ams=0,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        p=n%10;
        n=n/10;
    
    printf("%d\n",p);
    count++;
    }
    printf("%d\n",count);
    while(x!=0)
    {
        p=x%10;
       x=x/10;
        ams=ams+(pow(p,count));
    }
    printf("%d",ams);
}