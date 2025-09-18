#include<stdio.h>
int main()
{int a,i,n,c=0;
printf("enter value of n\n");
scanf("%d",&n);
printf("total no. in given no.is:");
while(n>0)
{a=n%10;
 c=c+1;
 n=n/10;
 
};
printf("%d",c);

}