#include<stdgccio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/(1+i);
    }
    printf("%d",sum);
}