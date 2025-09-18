#include<stdio.h>
int main()
{int a,i,n;
printf("enter value of n\n");
scanf("%d",&n);
printf("reverse no. of given no.is:");
while(n>0)
{a=n%10;
 n=n/10;
 printf("%d",a);
 }
}