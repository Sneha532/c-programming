#include<stdio.h>
int main()
{
    float a,b,c,d,area,perim;
    printf("Enter the value of bottom left co-ordinate and top right co-ordinate:");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    area=(c-a)*(d-b);
    printf("%f",area);
    perim=((c-a)*2)+((d-b)*2);
    return 0;
}