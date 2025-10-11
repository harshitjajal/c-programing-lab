#include<stdio.h>
int main()
{int i,j,a[3][3],b[9],max,min;
 int *ptr;
 ptr=&a[0][0];
 printf("enter your 3x3 matrix:\n");
 for(i=0;i<9;i++)
  {scanf("%d",ptr);
   ptr++;
  }
  ptr=&a[0][0];
  max=*ptr;
  min=*ptr;
  for(i=0;i<9;i++)
  {if(max<*ptr)
   {max=*ptr;
   }
   else if(min>*ptr)
   {min=*ptr;
   }
   ptr++;
  }
  printf("largest value of matrix is:\n%d\n",max);
  printf("smallest value of matrix is:\n%d\n",min);
 return 0;
}