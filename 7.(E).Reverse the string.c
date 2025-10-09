#include<stdio.h>
#include<string.h>
int main()
{int i,length,j=0;
 char str[100],rev[100];
 printf("enter a string:\n");
 scanf("%s",str);
 length=strlen(str);
 for(i=length-1;i>=0;i--)
 {rev[j]=str[i];
  j++;
 }
 rev[j]='\0';
 printf("reversed string is:\n%s",rev);
 return 0;
}