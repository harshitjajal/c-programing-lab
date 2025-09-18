#include<stdio.h>
int main()
{int i,a[100],largest,smallest;
 printf("enter 100 values");
 for(i=0;i<100;i++)
 scanf("%d",&a[i]);
 largest=smallest=a[0];
 for(i=1;i<100;i++)
 {if(a[i]>largest)
  largest=a[i];
  if (a[i]<smallest)
  smallest=a[i];
 }
  printf("largest no is: %d",largest);
  printf("smallest no is: %d",smallest);
}