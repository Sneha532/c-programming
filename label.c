#include<stdio.h>
int main()
{
    label:
    printf("we are inside label\n");
    goto end;
    printf("Hello world");
    goto label;
    end:
    printf("We are at end");
    return 0;
    

}