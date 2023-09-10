#include<stdio.h>
#include<string.h>
void replace_text(char *text, char *pattern1, char *pattern2)
{
    int i,j,k;
int x=strlen(text);
int y=strlen(pattern1);
int z=strlen(pattern2);
int replacementlen=z-y;
for(int i=0;i<=x-y;i++)
{
    int match=1;
    for(int j=0;j<y;j++)
    {
    if(text[i+j]!=pattern1[j])
    {
        match=0;
    
    break;
    }
 }
      if(match)
      for(ink k=x-1;k>=i+y;k--)
      {
        text[k+replacementlen]=text[k];
      }
    for(int k=0;k<z;k++)
    text[i+k]=pattern2[k];
    x=x+replacementlen;
}
return;
}
    int main()
    {
        char text[100];
        char pattern1[100];
        char pattern2[100];
        scanf("%s",text);
        scanf("%s",pattern1);
        scanf("%s",pattern2);
        replace_text(text,pattern1,pattern2);
        printf("modified text:%s\n",text);

    }
