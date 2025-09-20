#include<stdio.h>
 int main()
{int i,n,l,s;
 printf("enter any number\n");
 scanf("%d",&n);
 s=n*n;
 l=s%10;
 if(n==l)
 printf("given number %d is automorphic number",n);
 else
 printf("given number %d is not automorphic number",n);
} 
