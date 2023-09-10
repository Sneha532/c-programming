#include<stdio.h>
struct
{
    char engine;
    int fuel;
} car1, car2;
int main()
{
    printf("engine name");
    scanf("%s", car1.engine);
    printf("fuel no");
    scanf("%d", &car1.fuel);
    printf("engine name");
    scanf("%s", car2.engine);
    printf("fuel no");
    scanf("%d", &car2.fuel);
    printf("%s", car1.engine);
    printf("%d", car1.fuel);
    printf("%s", car2.engine);
    printf("%d", car2.fuel);
}
