#include<stdio.h>
 int main()
{int i,c=0,d=0;
 char x,y,a[5];
 x='x';
 y='y';
 printf("enter 5 students sex code as x,y\n");
 for(i=0;i<5;i++)
 scanf("%c",&a[i]);
 for(i=0;i<5;i++)
 {if(a[i]==x)
  c=c+1;
  else if(a[i]==y)
  d=d+1;
 }
 printf("there are total %d boys are present in the class and\n\nthere are total %d girls are present in the class",c,d);
 }
 