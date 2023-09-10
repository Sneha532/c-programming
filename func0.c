#include<stdio.h>
struct student{
      char name[100];
      int roll;
      float cgpa;

};
   int main()
   {
      int n,i,prv=0,max;
      
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
         scanf("%s",student[i].name);
         scanf("%d",&student[i].roll);
         scanf("%f",&student[i].cgpa);
         
      }
       for(i=0;i<n;i++)
      {
         printf("%s",student[i].name);
         printf("%d",student[i].roll);
         printf("%f",student[i].cgpa);
      }
      for(i=0;i<n;i++){
           if(student[i].cgpa>prv)
         max=student[i].cgpa;
          i=highest_index;
         prv=student[i].cgpa;
      }
      printf("%s%d%f",student[i].name,student[i].roll,max);
   }