#include<stdio.h>
int main()
{int i,j;
 int a[4][4],t[4][4];
 printf("enter 16 values of matrix:\n");
 for(i=0; i<4; i++)
 {for(j=0; j<4; j++)
  {scanf("%d",&a[i][j]);
  }
 }
 for(i=0; i<4; i++)
 {for(j=0; j<4; j++)
  {t[j][i]=a[i][j];
  }
 }
 printf("transpose matrix is:\n");
 for(i=0; i<4; i++)
 {for(j=0; j<4; j++)
  {printf("%d\t",t[i][j]);
  }
 }
 return 0;
}