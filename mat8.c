#include<stdio.h>
int main()

{
     char name[34];
     char vowel[5]={'a','e','i','o','u'};
     int i,j,length=0,count=0;
     scanf("%s",name);
     for(i=0;name[i]!='\0';i++)
     length++;
    for(i=0;i<length;i++)
    {
        for(j=0;j<5;j++)
        {
            if(name[i]==vowel[j])
            count++;
        }
    }
printf("%d",count);

}