#include<stdio.h>
int main()
{int i,j,k;
 int a[2][3],b[3][2],c[2][2];
 printf("enter 6 values of 1st arrey:\n");
 for(i=0;i<2;i++)
 {for(j=0;j<3;j++)
  {scanf("%d",&a[i][j]);
  }
 }
 printf("enter 6 values of 2nd arrey:\n");
 for(i=0;i<3;i++)
 {for(j=0;j<2;j++)
  {scanf("%d",&b[i][j]);
  }
 }

 for(i=0;i<2;i++)
 {for(j=0;j<2;j++)
  {c[i][j]=0;
  for(k=0;k<3;k++)
   {
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
   }
  
  }
 }
 printf("resultant arrey is:\n");
 for(i=0;i<2;i++)
 {for(j=0;j<2;j++)
  {printf("%d\t",c[i][j]);
  }
 }
 return 0;
}