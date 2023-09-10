#include<stdio.h>
#include<math.h>
int main()

{
    int sum=0;
    int a[12]={3,4,7,6,5,3,6,3,1,3,5,8};
     for(int i=0;i<=11;)
     {
        sum=sum+pow(a[i],2)+pow(a[i+1],3)+pow(a[i+2],1/2)+pow(a[i+3],2);
         i=i+4;
     }
     printf("sum=%d",sum);
}
