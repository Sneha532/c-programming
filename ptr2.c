#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float *height;
    float sum=0,avg;
    printf("input no.of students\n");
    scanf("%d",&n);
    height=(float *)
    malloc(n * sizeof(float));
    printf("input heights for %d students\n",n);
    for(i=0;i<n;i++)
        scanf("%f",&height[i]);
    for(i=0;i<n;i++)
    {
    sum+=height[i];
    }
    avg=sum/(float) n;
    printf("average height =%f\n",avg);
    free(height);
    return 0;

}