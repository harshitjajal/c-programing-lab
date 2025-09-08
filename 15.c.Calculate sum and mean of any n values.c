#include<stdio.h>
int main()
{int i,n;
 int sum=0;
 float mean;
 printf("enter number of values\n");
 scanf("%d",&n);
 int values[n];
printf("enter any values\n");
for(i=0;i<n;i++)
{printf("value%d:",i);
scanf("%d",&values[i]);
sum=sum+values[i];
}
mean=sum/n;
printf("sum of given ten values = %d\n",sum);
printf("mean of given ten values = %f\n",mean);
}