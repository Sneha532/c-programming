#include<stdio.h>
int main()
{
    int x0,y0,x1,y1,r,s;
    printf("enter a co-ordinate of s point and co ordinate of the center and radious of the circle");
    scanf("%d %d %d %d %d",&x1,&y1,&x0,&y0,&r);
    s=((x1-x0)*(x1-x0))+((y1-y0)*(y1-y0));
 if(s<(r*r)) 
    printf("This point is inside the circle");
else if(s>(r*r))
    printf("this point is outside of the circle");
else
    printf("that point is on the circle");
return 0;


}