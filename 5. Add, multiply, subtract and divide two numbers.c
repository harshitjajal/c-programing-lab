#include<stdio.h>
float main()
{float a,b,c;
 printf("enter value of a and b:\n");
 scanf("%f%f",&a,&b);
 c=a+b;
 printf("value of a+b is c=");
 printf("%f+%f=%f\n",a,b,c);
 c=a-b;
 printf("value of a-b is c=");
 printf("%f-%f=%f\n",a,b,c);
 c=a*b;
 printf("value of a*b is c=");
 printf("%f*%f=%f\n",a,b,c);
 c=a/b;
 printf("value of a/b is c=");
 printf("%f/%f=%f\n",a,b,c);
}