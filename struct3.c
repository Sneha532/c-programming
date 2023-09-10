#include<stdio.h>

    struct student{
        float cgpa;
        char name[10];

    };
    int main(){
    int i;
    float avg;
    struct student st[5];
    printf("enter records of 5 students");
    for(i=0;i<5;i++)
    {
        printf("enter cgpa:");
        scanf("%f",&st[i].cgpa);
        printf("enter the name:");
        scanf("%s",&st[i].name);

    }
    avg=0.0;
    for(i=0;i<5;i++)
    avg+=st[i].cgpa;
    avg=avg/5.0;
    printf("avg cgpa:%f",avg);
    return 0;
}