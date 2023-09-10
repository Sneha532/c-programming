#include<stdio.h>          //insert a number

int main()
{
    int arr[100],i,j,n,temp,x,pos;
    printf("Enter the value of N \n");
    scanf("%d", &n);
 
    printf("Enter the numbers \n");
     for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
        printf("\nEnter the new element to be inserted: ");
        scanf("%d", &x);
       arr[i] = x;
       n++;

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    for(i = 0; i < n; i++) 
        {
         for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                     temp =  arr[i];
                     arr[i] = arr[j];
                    arr[j] = temp;
 
                }
 
            }
 
        }
    
}