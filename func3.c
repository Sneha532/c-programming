#include<stdio.h>
#include<math.h>
int my_add(int a,int b)
{
    return a+b;
}
int main()
{
    
    printf("%d",my_add(3.0,sqrt(3.0)));    //it have to be int
    printf("%d",my_add(3));              //too few arguments to find
    printf("%d",my_add(3,4,5));          //too many arguments to function
}
