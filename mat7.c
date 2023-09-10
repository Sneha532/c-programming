#include<stdio.h>
int main()
{
     char name1[10],name2[10],name3[100];
     int i,j,length1=0,length2=0,n;
    printf("enter a name1 and name2");
    scanf("%s%s",name1,name2);
    for(i=0;name1[i]!='\0';i++)
    length1++;
     for(j=0;name2[j]!='\0';j++)
    length2++;
    if(length1==length2)
    printf("both are same\n");
    else
    printf("both are not same");
//concatanate


    n=length1+length2;
    for(i=0;i<length1;i++)
    name3[i]=name1[i];
    for(i=length1,j=0;i<n,j<length2;i++,j++)
    name3[i]=name2[j];
    for(i=0;i<n;i++)
    printf("%c",name3[i]);
}