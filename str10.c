#include<stdio.h>
int main()
{
    int i,j,temp,avg=0,avg1[5];
    char city[5][100];
    printf("Enter the name of city");
    for(i=0;i<5;i++)
    {
        scanf("%s",city[i]);
    }
        for(i=0;i<5;i++)
    {
            printf("city %d:",i+1);
        for(j=0;j<7;j++)
        {
            scanf("%d",&temp);
            avg+=temp;
        }
        avg1[i]=avg/7;
    }
    for(i=0;i<5;i++)
    printf("%s\n=%d\n",city[i],avg1[i]);

}