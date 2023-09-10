#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,sum,square=0,cube=0,s=0;
    printf("enter the number of integers");
    scanf("%d",&n);
    printf("these are:");
    for(i=1;i<=n;i++)
    {
        printf("enter the integer");
        scanf("%d",&x);
        if(i==1 || (i-1)%4==0)
        {
            square+=pow(x,2);
        }
        
       if(i%4==2)
        {               
            cube+=pow(x,3);
        }
        
        if(i%3==0)
        {
            s+=pow(x,0.5);
        }
        
      if(i%4==0)
        {
        square+=pow(x,2);
        }
        
    }
    sum=square+cube+s;
    printf("%d",sum);
}