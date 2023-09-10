#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,j,r,q,p=1;
    float sum=0;
    printf("enter the value of x and n");
    scanf("%d%d,&x,&n");
    for(i=1;i<=n;i++)
    {   
        p=p*i;
       for(j=0;j<=i;j++)
     g
     
        if(i%2!=0)
        {
           q=pow(-1,j);
           r=pow(x,i);
           sum=sum+(r/p)*q;
        }
     
      
    }
    printf("%f",sum);
}