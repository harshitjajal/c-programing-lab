#include<stdio.h>
#include<string.h>
int main()
{int i,length;
 char str[100];
 printf("enter a string:\n");
 scanf("%s",str);
 length=strlen(str);
 printf("characters of a string vertically are:\n");
 for(i=0;i<length;i++) 
 {printf("\n%c",str[i]);
 }
 return 0;
}