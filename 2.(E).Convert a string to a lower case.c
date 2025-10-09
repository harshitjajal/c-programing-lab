#include<stdio.h>
#include<string.h>
int main()
{int i;
char str[100];
 printf("enter a string:\n");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 if(str[i]>='A'&&str[i]<='Z')
 str[i]=str[i]+32;
 printf("converted to lower case string is:\n%s\t",str);
}