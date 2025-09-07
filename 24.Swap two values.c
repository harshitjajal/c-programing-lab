#include<stdio.h>
float main()
{float a,b,c;
 printf("enter value of a and b:\n");
 scanf("%f%f",&a,&b);
 printf( " so before swapping a =%f\n and b =%f\n\n",a,b);
 c=a;
 a=b;
 b=c;
 printf("after wmswqpping ,\na=%f\nb=%f ",a,b);
}