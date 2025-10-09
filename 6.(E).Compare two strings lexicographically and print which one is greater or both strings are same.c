#include<stdio.h>
#include<string.h>
int main()
{int i,result;
 char str1[100],str2[100];
 printf("enter first string:\n");
 scanf("%s",str1);
 printf("enter second string:\n");
 scanf("%s",str2);
 result=strcmp(str1,str2);
 if(result==0)
 {printf("string1 and string2 are same:\n");
 }
 else if(result>0)
 {printf("string1 is greater than string2:\n");
 }
 else
 {printf("string2 is greater than string1:\n");
 }
 return 0;
}