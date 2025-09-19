#include<stdio.h>
 int main()
{int i,n,a=0;
 printf("enter a number\n");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {if(n%i==0)
  a=a+i;
 }
 if(a==n)
 printf("given no. %d is perfect no.",n);
 else
 printf("given no. %d is not perfect no.",n);
}
 