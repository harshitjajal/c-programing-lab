#include<stdio.h>
 int main()
{int i,sum=0;
 for(i=1;i<101;i++)
 {if(i%3==0)
  sum=sum+i;
 }
 printf("sum of integers from 1 to 100,which are divisible by 3 is :\n%d",sum);
}
 