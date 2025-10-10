#include<stdio.h>
int main()
{int i,j,l,m,x1,y1,x2,y2,k,a[100][100],b[100][100],c[100][100];
 printf("enter which dimension's  matrix 1 you are entering\n(like for 2X3 enter 2 and 3)\n::\n");
 scanf("%d%d",&x1,&y1);
 printf("enter which dimension's  matrix 2 you are entering\n(like for 2X3 enter 2 and 3)\n::\n");
 scanf("%d%d",&x2,&y2);
 printf("enter your first matrix:\n");
 for(i=0;i<x1;i++)
 {for(j=0;j<y1;j++)
  {scanf("%d",&a[i][j]);
  }
 }
 printf("enter your second matrix:\n");
 for(i=0;i<x2;i++)
 {for(j=0;j<y2;j++)
  {scanf("%d",&b[i][j]);
  }
 }
 if(x1==x2&&y1==y2)
 {
  printf("\naddition of given two matrix is:\n");
  for(i=0;i<x1;i++)
  {for(j=0;j<y1;j++)
   {c[i][j]=a[i][j]+b[i][j];
   }
  }
  for(i=0;i<x1;i++)
  {for(j=0;j<y1;j++)
   {printf("%d ",c[i][j]);
   }
   printf("\n");
  }
 
 printf("\nsubtraction of given two matrix is:\n");
  for(i=0;i<x1;i++)
  {for(j=0;j<y1;j++)
   {c[i][j]=a[i][j]-b[i][j];
   }
  }
  for(i=0;i<x1;i++)
  {for(j=0;j<y1;j++)
   {printf("%d ",c[i][j]);
   }
   printf("\n");
  }
 }
 else
 printf("\naddition and subtraction of given two matrixs is not possible!\n");
 if(y1==x2)
 {printf("\nmultiplication of given two matrixs is:\n");
  for(i=0;i<x1;i++)
  {for(j=0;j<y2;j++)
   {c[i][j]=0;
    for(k=0;k<x2;k++)
    {c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
   }
  }
 for(i=0;i<x1;i++)
  {for(j=0;j<y2;j++)
   {printf("%d ",c[i][j]);
   }
   printf("\n");
  }
 }
 else if(y1!=x2)
 printf("\nmultiplication of given two matrixs is not possible!\n");
 return 0;
}