#include<stdio.h>
int main()
{
    int A[3][3],i,j,count;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&A[i][j]);
    }  
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if(i>j && A[i][j]==0)
    count=1;
    else if(i<j && A[i][j]==0)
    count=0;
    }  
    }
    if(count==1)
    printf("its upper triangular matrix");
    else if(count==0)
    printf("its a lower triangular matrix");
    
}