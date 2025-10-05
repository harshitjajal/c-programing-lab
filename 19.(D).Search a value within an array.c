#include<stdio.h>
int main()
{int i,j,n,count=0,a[100],num,position[100];
 printf("enter number how many values you will enter:\n");
 scanf("%d",&n);
 if(n>100||n<=0)
 {printf("task is not possible!");
  return 0;
 }
 printf("enter %d values:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter a number which you want to find in arrey:\n");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {if(a[i]==num)
  {position[count]=i+1;
   count++;
  }
 }
 if(count==0)
 {printf("your entered value is not found in arrey");
  return 0;
 }
 for(i=0;i<count;i++)
 printf("your entered value %d is at position:%d in array\n",num,position[i]);
 return 0;
}