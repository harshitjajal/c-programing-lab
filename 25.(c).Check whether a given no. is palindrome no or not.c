#include<stdio.h>
int main()
{int a,i,n,c,b=0;
printf("enter value of n\n");
scanf("%d",&n);
c=n;

while(n>0)
{a=n%10;
 b=b*10+a;
 n=n/10;
 
 }
 printf("reverse no. of given no.is:%d\n",b);
 if (b==c)
 printf("given no. is palindrome no.");
 else
 printf("given no. is not palindrome no.");
 
}