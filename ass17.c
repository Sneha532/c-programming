
#include<stdio.h>
#include<math.h>
int main()
{
    
    float sum=0,x,n,i,j,p=1;
    scanf("%f%f",&x,&n);
    for(i=1,j=0;i<=n;j++,i++)
    {
    
        {
        
            sum=sum+((pow(x,i))/i)*pow(-1,j);
        }
    }
    printf("sum=%f",sum);
    return 0;
}