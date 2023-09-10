#include<stdio.h>
int main()
{
     FILE *fptr;
    char filename[]="file2.dat";
    fptr=fopen(filename,"w");
    if(fptr==NULL)
    printf("error in file creation");



}