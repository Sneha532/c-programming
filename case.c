#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age");
    scanf("%d",&age);
    switch(age)
    {
        case 3:
        printf("the age is 45");
        switch(marks)
        {
            case 45:
            printf("marks is 45");
            break;
            default:
            printf("marks is not 45");
        }
        break;
        case 2:
        {
        printf("The age is 45");
        }
        break;
    }
    return 0;
}
