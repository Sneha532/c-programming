#include<stdio.h>
int main()
{
    int length=0,flag=0,i;
    char name[25];
    printf("enter a name:");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    length++;
    for(i=0;i<length;i++){
    if(name[i]==name[length-i-1])
    flag=1;
    else
    flag=0;
    }
    if(flag==1)
    printf("It is a palindrome ");

    if(flag==0)
    printf("it is not palindrome number");
}