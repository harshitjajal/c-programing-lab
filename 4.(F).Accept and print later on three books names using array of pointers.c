#include<stdio.h>
int main()
{int i,j;
 char *ptr[3],str[3][100];
 printf("enter name of  your favourite three books\n");
 for(i=0;i<3;i++)
 {printf("book %d:",i+1);
  ptr[i]=str[i];
  scanf("%s",ptr[i]);
 }
 printf("\nname of  your favourite three books are:\n");
 for(i=0;i<3;i++)
 {ptr[i]=str[i];
  printf("book %d:%s\n",i+1,ptr[i]);
 }
 return 0;
}
