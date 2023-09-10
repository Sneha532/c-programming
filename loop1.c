#include<stdio.h>
float my_func(float r)
{
    float a;
    a=3.14*r*r;
  return a;
}
 int main()
  {
    float r;
    scanf("%f",&r);
    printf("%f",my_func(r));
    return 0;
  }
