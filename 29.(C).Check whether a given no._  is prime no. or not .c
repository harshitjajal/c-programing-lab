#include<stdio.h>
 int main()
{int i,n;
 printf("enter a number\n");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {if(n%i==0)
  printf("given number %d is not a prime number",n);
  else
  printf("given number %d is a prime number",n);
  return 0;
 }
}