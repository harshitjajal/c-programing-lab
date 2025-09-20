#include<stdio.h>
 int main()
{int i,a=0,b=1,n,c,s;
 printf("enter how many terms of fibonacci series you want\n");
 scanf("%d",&n);
 c=n-2;
 printf("fibonacci series are:\n0,");
 for(i=0;i<=c;i++)
 {printf("%d,",b);
  s=a+b;
  a=b;
  b=s;
 }
}