#include<stdio.h>
int main()
{int a;
 printf("enter value of a:\n");
 scanf("%d",&a);
 int b=a/7;
 int c=b*7;
 if(c==a)
 {printf(" given no. %d is divisible by 7",a);}
 else
 printf("given no. %d is not divisible by 7",a);
 }