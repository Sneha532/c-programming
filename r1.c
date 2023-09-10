#include<stdio.h>
void foo( int n ) 
{  
int data; 
if ( n == 0 ) return; 
foo ( n-1 );  
scanf("%d", &data); 
printf("%d\n",data); 
} 
int main ( ) 
{ int k = 5; 
foo ( k ); 
}