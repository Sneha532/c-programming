#include<stdio.h>
#include<math.h>
int main()
{
    float amnt,yrs,i,si,ci;
    printf("enter amnt,i,yrs");
    scanf("%f %f %f",&amnt,&i,&yrs);
    si=(amnt*i*yrs)/100;
    ci=amnt*(pow((1+(i/100)),(yrs)));
    printf("simple interest=%f",si);
    printf("compound interest=%f",ci);
    return 0;
}