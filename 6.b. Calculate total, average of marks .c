#include<stdio.h>
float main()
{float s1,s2,s3,total,average;
 printf("enter marks of three subjects:\n");
 scanf("%f%f%f",&s1,&s2,&s3);
 total=s1+s2+s3;
 average=total/3;
 printf("your total=%f\n",total);
 printf("your average=%f\n",average);
 if(average>=70)
 {printf("congratulations you are distinction\n");
 }
 else if (average>=60)
 {printf("congratulations you are first\n");
 }
 else if (average>=50)
 {printf("congratulations you are second\n");
 }
 else if (average>=35)
 {printf("your result is third class\n");
 }
 else
 {printf("you are failed!! ");};
 if(s1||s2||s3<35)
 printf("oh.. you are failed!! because your mark in any subject is less then 35");
 }