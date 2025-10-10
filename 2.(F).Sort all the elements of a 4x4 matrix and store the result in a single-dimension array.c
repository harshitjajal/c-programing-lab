#include<stdio.h>
int main()
{int i,j,k=0,a[4][4],b[16],s,d;
 char c;
 printf("enter your 4X4 array:\n");
 for(i=0;i<4;i++)
 {for(j=0;j<4;j++)
  {scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<4;i++)
 {for(j=0;j<4;j++)
  {b[k]=a[i][j];
   k++;
  }
 }
 printf("\nyour all the elements of a 4x4 matrix are:\n");
 for(i=0;i<16;i++)
 printf("%d ",b[i]);
 printf("\nnow you want this arrey,\nin ascending order sorting,\nor descending order sorting?\n");
 printf("\nenter 'a' for ascending order and 'd' for descending order:\n");
 scanf(" %c",&c);
 if(c=='a'||c=='A')
 {for(i=0;i<16;i++)
  {for(j=i+1;j<16;j++)
   {if(b[i]>b[j])
    {s=b[i];
     b[i]=b[j];
     b[j]=s;
    }
   }
  }
  printf("\nyour ascending array is:\n");
  for(i=0;i<16;i++)
  printf("%d ",b[i]);
  }
 else if(c=='d'||c=='D')
 {for(i=0;i<16;i++)
  {for(j=i+1;j<16;j++)
   {if(b[i]<b[j])
    {s=b[i];
     b[i]=b[j];
     b[j]=s;
    }
   }
  }
  printf("\nyour descending array is:\n");
  for(i=0;i<16;i++)
  printf("%d ",b[i]);
  }
 else
 {printf("your input is wrong!");
  return 0;
 }
 return 0;
}