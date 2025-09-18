#include<stdio.h>
int main()
{int a,i,n,sum=0;
printf("enter value of n\n");
scanf("%d",&n);
printf("sum of digits of a given no.is:");
while(n>0)
{a=n%10;
 sum=sum+a;
 n=n/10;
 }
printf("%d",sum);
}