#include<stdio.h>
int main()
{
     int x1,y1,x2,y2,c,m;
     printf("Enter the  co-ordinates of two points:\n");
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     m=((y2-y1)/(x2-x1));
     c=(y2-m*x2);
     printf("eqn of the straight line is y=%dx+%d",m,c);
    return 0;
}