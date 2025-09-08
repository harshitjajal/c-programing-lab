#include<stdio.h>
int main()
{int i,sum=0;
 for(i=1;i<=100;i++)
 { if(i%13==0)
   {sum=sum+i;};}
printf("\nsum of all nos. which divisible by 13 in 1 to 100=%d ",sum);
}
  