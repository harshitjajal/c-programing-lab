#include<stdio.h>
#include<string.h>
int main()
{int i,j;
 char str1[100],str2[100];
 printf("enter a string1:\n");
 scanf("%s",str1);
 printf("enter a string2:\n");
 scanf("%s",str2);
 printf("if you want to connect string 2 at end of string 2 than enter 12:\nelse enter 21:\n");
 scanf("%d",&j);
 if(j==12)
 {strcat(str1,str2);
  printf("concatenated string is:\n");
  printf("%s",str1);
 }
 else if(j==21)
 {strcat(str2,str1);
  printf("concatenated string is:\n");
  printf("%s",str2);
 }
 return 0;
}