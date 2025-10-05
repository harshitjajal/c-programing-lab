#include<stdio.h>
int main()
{int i,n,a[100];
 printf("enter number of how many values you enter:\n");
 scanf("%d",&n);
 if(n<=0||n>100)
 {printf("task is not possible!");
  return 0;
 }
 printf("enter %d values:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 if(n==1)
 {printf("after deleting , arrey not exist because you entered only %d values\n",n);
  return 0;
 }
 n--;
 printf("array after deletion  is:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}