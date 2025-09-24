#include<stdio.h>
int main()
{int i,n,notes[]={500,200,100,50,20,10,5,2,1},count[9]={0};
 printf("enter a value\n");
 scanf("%d",&n);
 for(i=0;i<9;i++)
 {if(n>=notes[i])
  {count[i]=n/notes[i];
   n=n%notes[i];
  }
 }
printf("minimum no. of notes required is:\n");
for(i=0;i<9;i++)
{if(count[i]!=0)
 printf("%d notes are required of %d Rs.\n",count[i],notes[i]);
}
return 0;
}