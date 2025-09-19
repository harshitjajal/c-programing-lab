#include<stdio.h>
 int main()
{int i,j,n;
 printf("all prime numbers out of 1 to 500 is:");
 for(i=2;i<=500;i++)
 {for(j=2;j<=i/2;j++)
  {if(i%j==0)
   break;
  }
  if(j>i/2)
 printf("%d,",i);
 }
} 