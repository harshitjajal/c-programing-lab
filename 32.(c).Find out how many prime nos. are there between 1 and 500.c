#include<stdio.h>
 int main()
{int i,j,c=0;
 for(i=2;i<=500;i++)
 {for(j=2;j<=i/2;j++)
  {if(i%j==0)
   break;
  }
  if(j>i/2)
  c=c+1;
 }
 printf("%d",c);
 return 0;
} 