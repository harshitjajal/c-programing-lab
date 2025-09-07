#include<stdio.h>
float main()
{float s1,s2,s3,total,average;
 printf("enter value of marks of three subjects :\n");
 scanf("%f%f%f",&s1,&s2,&s3);
 total=s1+s2+s3;
 printf("so your total is= %f\n\n",total);
 average=total/3;
 printf("average of three subjects marks is=");
 printf("%f/3=%f",total,average);
}