#include<stdio.h>
#include<string.h>
int main()
{int i,c,x=0,y=0,z=0,m=0,n=0;
 char str[100];
 printf("enter a string:\n");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++) 
 {if(str[i]=='a')
  {x++;}
  else if(str[i]=='e')
  {y++;}
  else if(str[i]=='i')
  {z++;}
  else if(str[i]=='o')
  {m++;}
  else if(str[i]=='u')
  {n++;}
 }
 printf("frequency of a is:%d\nfrequency of e is:%d\nfrequency of i is:%d\nfrequency of o is:%d\nfrequency of u is:%d",x,y,z,m,n);
 return 0;
}