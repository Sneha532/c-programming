#include<stdio.h>
#include<math.h>
int main()
{
   signed int a,b,c;
   float x1,x2;
    printf("enter the value of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("The quadratic equation is %d(x^2)+%dx+%d=0\n",a,b,c);
    x1=((-b)+sqrt((b*b)-4*a*c))/(2.0*a);
    x2=((-b)-sqrt((b*b)-4*a*c))/(2.0*a);
    if(((b*b)-4*a*c)<0)
    {
    printf("x1=(%f+i%f)\n",(-b/(2.0*a)),sqrt((4*a*c)-(b*b))/(2.0*a));
    printf("and x2=(%f-i%f)\n",(-b/2.0*a),sqrt((4*a*c)-(b*b))/(2.0*a));
    }
    else
    {
    printf("x1=%f",x1);
    printf("x2=%f",x2);
    }
    return 0;
}