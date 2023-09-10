#include<stdio.h>
#include<math.h>
int func(int a)
{
    int i,factorial=1;
    for(i=0;i<=a;i++)
    {
          factorial=factorial*i;
    }
          return factorial;
}
    int main()
{
    float x,sum=0;
    int n,i;
    scanf("%d%f",&n,&x);
    for(i=0;i<=n;i++)
    {
        sum+=pow(x,i)/func(i);
    }
    printf("%f",sum);

}