#include<stdio.h>
int main()
{int a,i,n,c,b,sum=0;
printf("enter value of n\n");
scanf("%d",&n);
c=n;

while(n>0)
{a=n%10;
 b=a*a*a;
 sum=sum+b;
 n=n/10;
 
 }
 printf("sum of cube of digits of no.is:%d\n",sum);
 if (sum==c)
 printf("given no. is palindrome no.");
 else
 printf("given no. is not palindrome no.");
 
}