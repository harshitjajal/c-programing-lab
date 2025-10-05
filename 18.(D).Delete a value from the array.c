#include<stdio.h>
int main()
{int i,n,a[100],num,c=0;
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
 printf("enter a value which you want to delete from the array:\n");
 scanf("%d",&num); 
 for(i=0;i<n;i++)
 {if(a[i]==num)
  {
  c++;
   
  }
 
 else if(c>0)
 a[i-c]=a[i];
 }
 if(c==0)
 {printf("your entered value is not found in arrey\nso arrey is still:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  return 0;
 }
 
 n=n-c;
 printf("array after deletion  is:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);

 return 0;
}