#include<stdio.h>
int main()
{
    int x,y,z,Max;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
       Max=x;
    else
       Max=y;
   if(Max>z)
   {
    printf("%d\n",Max);
    printf("stop\n");
   }
   else
   {
    printf("%d\n",z);
    printf("stop");
   }
}