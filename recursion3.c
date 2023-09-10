#include<stdio.h>
void foo(int n)
{
    int data;
    if(n==0)return;
    scanf("%d",&data);
    foo(n-1);
    printf("%d",data);

}

int main()
{
    int k=5;
    foo(k);
}