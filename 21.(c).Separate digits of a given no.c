#include<stdio.h>
int main()
{int a,i,n;
printf("enter value of n\n");
scanf("%d",&n);
printf("seperate digits of given number is:\n");
while(n>0)
{a=n%10;
 printf("%d , ",a);
 n=n/10;
}


}