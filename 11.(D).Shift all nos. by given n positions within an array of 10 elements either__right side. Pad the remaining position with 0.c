#include<stdio.h>
int main()
{int a[10],s[10];
 int i,j,n;
 char o;
 printf("enter value of n:\nenter 10 values\n");
 scanf("%d",&n);
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 printf("enter R or r for shift to right side\nenter L or l for shift to left side:\n");
 scanf(" %c",&o);
 if(o=='R'||o=='r')
 {if(n<1||n>10)
 printf("given task is not possible\n");
 else
 {for(j=0;j<n;j++)
  {for(i=9;i>0;i--)
   {a[i]=a[i-1];
   }
   a[0]=0;
  }
 }
 for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 }
 else
 {if(n<1||n>10)
 printf("given task is not possible\n");
 else
 {for(j=0;j<n;j++)
  {for(i=0;i<9;i++)
   {a[i]=a[i+1];
   }
   a[9]=0;
  }
 }
 for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 }
} 