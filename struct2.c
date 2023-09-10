#include<stdio.h>
int main()
{
    struct name_wgt
    {
        char name[24];
        float wgt;
    }a,b,c;
    scanf("%s%f",&a.name,&a.wgt);
    scanf("%s%f",&b.name,&b.wgt);
    scanf("%s%f",&c.name,&c.wgt);
    printf("%s=%f %s=%f %s=%f",a.name,a.wgt,b.name,b.wgt,c.name,c.wgt);

}
