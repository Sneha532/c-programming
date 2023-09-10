#include<stdio.h>
int main()
{
     char A[100];
     int i,count=0;
     printf("enter name:");
     scanf("%s",A);
     for(i=0;A[i]!='\0';i++)
     count++;
     printf("count=%d",&count);
     

     

}