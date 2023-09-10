#include<stdio.h>
int main()
{
    int l,r,h,b,a,p,A,q,figcode;
    printf("enter the case type");
    switch(figcode)
  {
    {
        case 1:
        printf("enter the value of radious");
        scanf("%d",&r);
        A=3.14*r*r;
        printf("area=%d",A);
    }
    break;
      {
        case 2:
        printf("enter the length of one side:");
        scanf("%d",&a);
        A=a*a;
        printf("%d",A);
      }
      break;
      {
        case 3:
        printf("enter the h and b");
        scanf("%d%d",&h,&b);
        A=h*b*(1/2);
        printf("%d",A);
      }
      break;
      {
        case 4:
        printf("enter the length of two side");
        scanf("%d%d",&p,&q);
        A=p*q;
        printf("%d",A);
      break;
  }
}
}