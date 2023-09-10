#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int i,factorial=1;
    for(i=1;i<=x;i++)
    {
    factorial*=i;
    }
    return factorial;
}
int main()

{
    
    float x,i,sum=0;
    int n;
    scanf("%f%d",&x,&n);
    for(i=1;i<=n;i++)
    {
            sum=sum+((pow(x,i))/fact(i));
        
    }
    printf("sum=%f",sum);
    printf("e^x=%f",(1+sum));
    return 0;
}