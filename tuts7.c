#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    switch(age)
    {
        case 1:
        printf("The age is 8");
        break;
        case 2:
        printf("The age is 67");
        break;
        case 3:
        printf("the age is 45");
        break;
        default:
        printf("age is not 8,67,45");
    }
    return 0;
}