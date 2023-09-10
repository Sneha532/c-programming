#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b+c)
   {
    printf("you are a pro gamer babe!!");
   }
   else if(b==c+a)
   {
    printf("you are a pro gamer babe\n");
   }
   else if(a==b+c)
   {
    printf("you are a pro gamer babe\n");
   }
    else
    {
        printf("You are a noob");
    }
    return 0;

}