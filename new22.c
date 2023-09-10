#include<stdio.h>
int factorial(int x)
{
    int fact =1;
    for(i=0;i<n;i++)
    {
        fact=fact*1;
    }
    return fact;
}
int main()
{
    int num,fact=1;
    printf("enter the number of rows for pascal");
    scanf("%d",&num);
    for(i=0;i<n;i++){
    for(j=0;j<i;j++)
    {
        int coeffcient=factorial(i)/(factorial(j)*factorial(i-j));
        printf("%d",coefficient);
    }
    printf("/n");
    }
}