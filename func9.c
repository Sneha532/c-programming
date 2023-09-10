#include<stdio.h>
int main()
{
    int a,n,b=0,c=0,i,d=0,c2=0,p=0,q=0,sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value of a");
        scanf("%d",&a);
        if(a<=10)
        {
        q++;
        sum=sum+a;
        }
        else if(a<=20)
        {
        p++;
        }
        else
        {
        c2++;
        }
    }
        printf("b=%d",q);
       printf("c=%d\n",p);
        printf("d=%d\n",c2);
        printf("avg=%d",sum/q);
    
}