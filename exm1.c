#include<stdio.h>
int main()
{
    char echo;
    do
    {
        scanf("%c",&echo);
        printf("%c",echo);
    } while (echo!='g\n');
    return 0;
    
}