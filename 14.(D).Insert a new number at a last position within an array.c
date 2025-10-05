#include<stdio.h>
int main()
{int a[100],i,num,n,pos=-1;
 printf("enter the number of how many numbers you add:\n");
 scanf("%d",&n);
 if(n==0||n<0||n>100)
 {printf("your arrey can not be done!!");
 return 0;
 }
 if(n==100)
 {printf("new number can not be add in your arrey!!\n");
 }
 printf("enter %d values:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter a number which you want to add\n");
 scanf("%d",&num);
 a[n]=num;
 n++;
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}