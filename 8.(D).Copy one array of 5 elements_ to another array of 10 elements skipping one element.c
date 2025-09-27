#include<stdio.h>
int main()
{int i,j,a[5],b[10],d;
 printf("enter 5 values of arrey a:\n");
 for(i=0;i<5;i++)
  {scanf("%d",&a[i]);
  }
 for(i=0;i<5;i++)
 {d=i*2;
  b[d]=a[i];
 }
 for(i=0;i<10;i++)
  {printf("%d\t",b[i]);
  }
 return 0;
}