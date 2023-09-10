#include<stdio.h>
int main()
{
    int a,b,c,n1,n2,n3;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d$%d$%d",a,b,c);
    printf("\n");
    //QUESTION NO 2:
    while(a>0)
    {
          while(a>0)
          {
               printf("%c",(a%10)+'0');
               a=a/10;
               if(a>0)
               printf("#");
          }
            printf("\n");
          while(b>0)
          {
               printf("%c",(b%10)+'0');
               b=b/10;
               if(b>0)
               printf("#");
          }
          printf("\n");

          while(c>0)
          {
               printf("%c",(c%10)+'0');
               c=c/10;
               if(c>0)
               printf("#");
          }
           printf("\n");

     }
       return 0;
}