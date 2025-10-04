#include<stdio.h>
int main()
{int a[10],freq[10];
 int i,j,n;
 printf("enter 10 values:\n");
 for(i=0;i<10;i++)
 {scanf("%d",&a[i]);
  freq[i]=1;
 }
 for(i=0;i<10;i++)
 {if(freq[i]==0)
  continue;
 for(j=i+1;j<10;j++)
 {if(freq[j]==0)
  continue;
  if(a[i]==a[j])
  {freq[i]++;
  freq[j]=0;
  }
 }
 }
 for(i=0;i<10;i++)
 {if(freq[i]!=0)
  printf("frequency of %d is : %d\n",a[i],freq[i]);
 }
} 