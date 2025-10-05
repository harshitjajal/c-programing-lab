#include<stdio.h>
int main()
{int a[100],i,n;
 printf("enter the number of how many numbers you add:\n");
 scanf("%d",&n);
 if(n<=0||n>100)
 {printf("task is not possible!\n");
 return 0;
 }
 printf("enter %d values:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 if(n==1)
 {printf("after deletion arrey is not exist!\n");
 return 0;
 }
 printf("arrey after deletion is:\n");
 for(i=1;i<n;i++)
 printf("%d\t",a[i]);
}
