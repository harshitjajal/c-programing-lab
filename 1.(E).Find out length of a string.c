#include<stdio.h>
#include<string.h>
int main()
{int length;
 char str[100];
 printf("enter a string:\n");
 scanf("%s",str);
 length=strlen(str);
 printf("length of string is:\n%d",length);
}