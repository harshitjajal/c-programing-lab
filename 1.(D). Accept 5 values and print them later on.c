#include<stdio.h>
int main()
{int a[5],i;
 printf("enter 5 values\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 printf("your entered 5 values are:\n");
 for(i=0;i<5;i++)
 {printf("%d\t",a[i]);
 }
 return 0;
}