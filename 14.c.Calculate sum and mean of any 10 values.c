#include<stdio.h>
int main()
{int i;
 int sum=0;
 int values[10];
 float mean;
printf("enter any ten values\n");
for(i=0;i<10;i++)
{printf("value%d:",i);
scanf("%d",&values[i]);
sum=sum+values[i];
}
mean=sum/10.0;
printf("sum of given ten values = %d\n",sum);
printf("mean of given ten values = %f\n",mean);
}