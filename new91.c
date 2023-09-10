#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,count=0,flag,j;
    int *p;
    char name[100];
    printf("enter a name");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    count++;
    printf("%d",count);
     p=(int*) malloc(count*sizeof(int));
    for(i=0,j=0;i<count;i++)
     {
        if(name[i]==name[count-i-1])
        flag=0;
        else
        flag=1;
     }
     if(flag==0)
     printf("it is a palimdrome number");
     else
     printf("it is not");

}