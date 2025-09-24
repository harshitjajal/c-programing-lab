#include<stdio.h>
int main()
{int a[10],i;
 printf("enter 10 values\n");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 printf("your entered 4th,7th and 9th values are:\n");
 printf("%d %d %d ",a[3],a[6],a[8]);
}