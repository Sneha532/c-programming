#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,s;
    printf("Enter the value of those co-ordinate\n");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    s=x1*(y2-y3)-y1*(x2-x3)+((x2*y3)-(x3*y2));
    if(s=0)
    printf("They are collinear");
    else
    {
   printf("They are non-collinear");
    }
    return 0;


}