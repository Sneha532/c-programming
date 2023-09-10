#include<stdio.h>
#include<math.h>
int main()
{
    int n,realcount=0,cnt,b;
    float a;
    printf("enter a no:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
      {
        for(int j=2;j<=i;j++)
        {
            cnt=0;
            a=sqrt(j);
            b=(int)a;
            if((i%j==0) &&(b==a))
            {
                cnt++;
                break;

            }
        }
        if(cnt==0)
        {
            realcount++;
        }
     }
    }
    printf("%d",realcount);
    return 0;

}