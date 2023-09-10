#include<stdio.h>
int main()
{
    int i,length=0;
    char name[100];
    scanf("%s",name);
    printf("name=%s",name);
    for(i=0;name[i]!='\0';i++)
    if(name[i]=='a')
    length++;
    printf("length=%d\n",length);
    return 0;
}