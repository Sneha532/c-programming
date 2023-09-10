#include<stdio.h>
#include<math.h>
int main()
{
        int i,n,q,r,count=0,j,realcount=0;
        float p,s;
        printf("enter a number");
        scanf("%d",&n);
       p= pow(n,0.5);
       printf("%d\n",p);
        q=sqrt(n);
        printf("%d\n",q);
       if(p==q)
       printf("it is a square number");
       else
       for(i=2;i<n/2;i++)
       {
             if(n%i==0){
                for(j=2;j<=i;j++)
                {
                    count=0;
                    r=pow(j,0.5);
                    s=pow(j,0.5);
                      if((r!=s)&& (i%j==0)){
                      count++;
                      break;
                      }
                }

             }
             if(count==0)
             realcount++;
         }
       
       printf("%d",realcount);

        

        
}