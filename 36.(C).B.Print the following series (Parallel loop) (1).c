#include<stdio.h>
int main()
{int i,j,k;
 for(i=1;i<=3;i++)
 {for(j=5;j>=3;j--)
  {if(i+j==6)
   for(k=1;k<=2;k++)
   printf("%d %d\n",i,j);
  }
 }
}