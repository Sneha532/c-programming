#include<stdio.h>
void reverse(int i)
{
   if(i<10)
    printf("%d",i);return;
    else{
    printf("%d",i%10);
    reverse(i/10);
    }
}
int main()
{
    int x,rvr=0;
    scanf("%d",&x);

    while(x!=0)
    rvr=rvr*10+reverse(x)
    printf("%d",rvr);
}
