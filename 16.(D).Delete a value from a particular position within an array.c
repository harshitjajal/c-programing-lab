#include<stdio.h>
int main()
{int i,n,pos,a[100];
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
 {printf("after deleting , arrey not exist because you entered ony %d values\n",n);
  return 0;
 }
 printf("enter value of at position which you want to delete\n");
 scanf("%d",&pos);
 if(pos<1||pos>n)
 {printf("task is not possible!");
  return 0;
 }
 for(i=pos-1;i<n-1;i++)
 {a[i]=a[i+1];
 }
 n--;
 printf("final array is:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}