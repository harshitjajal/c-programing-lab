#include<stdio.h>
int main()
{int i=1,n,factorial=1;
 printf("enter value of n\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { factorial=factorial*i;
  printf("\nfactorial of %d = %d",n,factorial);}
  }