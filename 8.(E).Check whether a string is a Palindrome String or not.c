#include<string.h>
int main()
{int i,length,j=0,result;
 char str[100],rev[100];
 printf("enter a string:\n");
 scanf("%s",str);
 length=strlen(str);
 for(i=length-1;i>=0;i--)
 {rev[j]=str[i];
  j++;
 }
 rev[j]='\0';
 result=strcmp(str,rev);
 if(result==0)
 {printf("your string is palindrome:\n");
 }
 else
 {printf("your string is not palindrome:\n");
 }
 return 0;
}