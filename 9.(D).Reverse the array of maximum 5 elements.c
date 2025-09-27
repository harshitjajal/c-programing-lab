#include<stdio.h>
int main()
{int i,n=0,value,a[5],c;
 printf("enter values.(if want to complete enter 0):\n");
 while(1)
 {scanf("%d",&value);
  if(value==0)
  break;
  a[n]=value;
  n=n+1;
 }
 if(n>5)
 {printf("you entered %d values which is more than 5 values,so process can not be done",n);
 return 0;
 }
 for(i=0;i<n/2;i++)
 {c=a[i];
  a[i]=a[n-1-i];
  a[n-1-i]=c;
 }
 for(i=0;i<n;i++)
 {printf("%d\t",a[i]);
 }
 return 0;
}