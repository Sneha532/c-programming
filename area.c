#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,a;
    printf("Enter the first co-ordinate");
    scanf("%d %d",&x1,&y1);
    printf("Enterthe value of second co-ordinate");
    scanf("%d %d;",&x2,&y2);
    printf("Enter the third co-ordinate");
    scanf("%d %d",&x3,&y3);
    a=(((x2*y3)-(x3*y2))-((x1*y3)-(y1*x3))+((x1*y2)-(x2*y1)))/2;
    printf("area:%d",a);
    return 0;

}