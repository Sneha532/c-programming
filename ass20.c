#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,j,p=1;
    float sum=0;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        p=p*i;
        for(j=0;i%2!=0;j++)
        {
            sum=sum+((pow(x,i))/p)*pow(-1,j);
        }
    }
    printf("sum=%f",sum);
    return 0;
}