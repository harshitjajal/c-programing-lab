#include<stdio.h>
int main()
{int i,c=0,b=0,d=0,a[200],positive,negative,zero;
 printf("enter 200 values\n");
 for(i=0;i<200;i++)
 scanf("%d",&a[i]);
 for(i=0;i<200;i++)
 {if(a[i]<0)
  c=c+1;
  else if(a[i]==0)
  b=b+1;
  else
  d=d+1;
 }
 printf("positive numbers are: %d\n",d);
 printf("negative numbers are: %d\n",c);
 printf("total zeroes are: %d",b);
}
