#include<stdio.h>
#include<string.h>
int main()
{int i;
 char c,str1[100],str2[100];
 printf("enter string 1:\n");
 scanf("%s",str1);
 printf("if you want to enter string 2 write y and not want than write n\n");
 scanf(" %c",&c);
 if(c=='y'||c=='Y')
 {printf("enter string 2:\n");
  scanf("%s",str2);
  }
  else if(c=='n'||c=='N')
  {
  
  }
 else 
 {printf("you enter wrong word!");
  return 0;
 }
 strcpy(str2,str1);
 printf("your new string is\n%s",str2);
}