#include<stdio.h>
int main()
{
     int A[3][3],B[3][3],i,j,C[3][3],k;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&A[i][j]);
    }  
    }
     for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&B[i][j]);
    }  
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    C[i][j]=0;
    }  
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     for(k=0;k<3;k++){
    C[i][j]+=A[i][k]*B[k][j];
    printf("%d",C[i][j]);
    }  
    }
    }
    for(i=0;i<3;i++){
        printf("\n");
    for(j=0;j<3;j++){
    printf("%d\t",C[i][j]);
    }  
    }
}
