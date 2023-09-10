#include<stdio.h>
int main()
{
    int i,count=0;
    char name[23];
    scanf("%s",name);
    printf("name=%s",name);
    for(i=0;name[i]!='\0';i++)
    if(name[i]='a')
    count++;
    printf("total=%d",count);
}