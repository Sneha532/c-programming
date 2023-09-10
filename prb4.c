#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of m and n;");
    scanf("%d %d",&m,&n);
    printf("%d\n",m+n);
    printf("%d\n",m%n);  
    printf ("%f\n",(float)m/n);
    printf("%d\n",((m*m)+(n*n)));
    printf("%d\n",((m+n)*(m+n)));
    printf("%f\n",((m+n)/2.0));
    printf("%f\n",((m*m)+(n*n))/2.0);

}