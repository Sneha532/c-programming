           //LOGICAL OPERATOR::
#include<stdio.h>
int main()
{
    int a,b;
    a=0;
    b=5;
    printf("a+b=%d",a&&b);      //if  both a and b afe zerothen output is also zero
    printf("a+b=%d",a||b);     //if only one of a and b is zero then result is also zero
    return 0;

}
