#include<stdio.h>
int main()
{int a[5],i,j,c;
 printf("enter 5 values\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 for(i=0;i<5;i++)
 {for(j=i+1;j<5;j++)
  {if(a[i]<a[j])
   {c=a[i];
    a[i]=a[j];
    a[j]=c;
   }
  }
 }
 printf("descending order of given 5 values are:\n");
 for(i=0;i<5;i++)
 { printf("%d\t",a[i]);
 }
}