#include<stdio.h>
#include<math.h>
int main()
{
    char a  ;
    short b;
    int c;
    long int d;
    float e;
    double f;
    printf("%d",sizeof(a));
    printf("%d",sizeof(b));
    printf("%d",sizeof(c));
    printf("%d",sizeof(d));
    printf("%d",sizeof(e));
    printf("%d",sizeof(f));
      

      //ques no 2://
    char a1;
    int b1;
    float c1;
    printf("enter the char :");
    scanf("%c",&a1);
    printf("ente the int:");
    scanf("%d",&b1);
    printf("enter the float c1");
    scanf("%f",&c1);
    printf("%c",a1);
    printf("%d",b1);
    printf("%f",c1);
    
    //ques no 3:celsius to farenheit
    int F,C;
    printf("enter the value of F\n");
    scanf("%d",&F);
    C=(5*(F-32))/9;   //this is the formule from farenheit to celsius
    printf("%d",C);
    printf("Enter the value of C\n");
    scanf("%d",&C);
    F=((9*C)/5)+32;
    printf("%d",F);
      

    //ques no 4:
    int s,A,a2,b2,c2;
    printf("enter the value of a2,b2,c2\n");
    scanf("%f %f %f",&a2,&b2,&c2);
    s=(a2+b2+c2)/2;
    A=sqrt(s*(s-a2)*(s-b2)*(s-c2));
    printf("area is=%f",A);
    return 0;
}
