#include<stdio.h>
int main()
{
    int sum=0,i;
     int a[8]={1,9,3,4,5,7,5,2};
    for(i=0;i<=7;i++)
    {

        if(a[i]%2!=0 && a[i+1]%2!=0)
        {
            sum=sum+a[i+1]*a[i];
        }

    }
    printf("sum=%d",sum);

}