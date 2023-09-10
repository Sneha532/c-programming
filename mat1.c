                              //tramspose of a matrices//
#include<stdio.h>
int main()

{
    int A[3][3];
    //int my_trans(A[5][5],x,y)
    int i,j;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&A[i][j]);
    }
    }
    for(i=0;i<3;i++){
        printf("\n");
    for(j=0;j<3;j++){
     printf("%d\t",A[j][i]);
     
    }
    }

}