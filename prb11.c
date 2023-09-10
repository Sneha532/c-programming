#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",& marks);
    if(marks>=90)
    printf("you will get ex grade\n");
    else if(marks>=80)
    printf("you will get A\n");
    else if("marks>=70")
    printf("you will get B\n");
    else if("marks>=60")
    printf("you will get C\n");
    else if(marks>=50)
    printf("you will get D\n");
    else if(marks>=35)
    printf("you will get p");
    else
    printf("you will get F");
    return 0;
}