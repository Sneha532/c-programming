#include<stdio.h>
int main()
{
    int x;
    FILE *fptr;
    char filename[]="file2.dat";
    fptr=fopen(filename,"w");
    fprintf(fptr,"KHGFJYFIUyf");
     fptr=fopen(filename,"r");
    fscanf(fptr,"%d",&x);
}
