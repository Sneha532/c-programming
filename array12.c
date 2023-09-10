#include<stdio.h>
int main()
{
    int A[67],i,n,x,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("enter a number");
    scanf("%d",&x);
    for(i=0;i<n+1;i++){
       for(j=i+1;j<n+1;j++){
       if(x>A[i]) 
       temp[]=A[j];
        A[j]=x;
        A[j+1]=temp;
    
    }
    }
    for(i=0;i<n+1;i++)
    printf("%d",A[i]);
}