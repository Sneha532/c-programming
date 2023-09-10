
#include<stdio.h>
#include<math.h>
int main()

{
    
    float x,i,p=1,n,sum=0;
    scanf("%f%f",&x,&n);
    for(i=1;i<=n;i++)
    {
        
            p=p*i;
            sum=sum+((pow(x,i))/p);
        
    }
    printf("sum=%f",sum);
    printf("e^x=%f",(1+sum));
    return 0;
}