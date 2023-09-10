#include<stdio.h>
int main()
{  
     int i,sum=0;
    int a[3]={1,9,3};
    for(i=0;i<=2,i++)
    {
        if(a[i]%2!=0 && a[i+1]%2!=0)
        {
        sum=sum+a[i+1]*a[i];
        }
    }
    printf("%d",sum);

}