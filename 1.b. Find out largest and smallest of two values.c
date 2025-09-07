#include<stdio.h>
float main()
{float a,b;
 printf("enter value of a and b:\n");
 scanf("%f%f",&a,&b);
 if(a>b)
 {printf("%f is largest\n",a);
  printf("%f is smallest\n",b);
 }
 else
 {printf("%f is largest\n",b);
  printf("%f is smallest\n",a);
 };
}