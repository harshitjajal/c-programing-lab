#include<stdio.h>
float main()
{float celcius,Fahrenheit;
 printf("enter value of celcius:\n");
 scanf("%f",&celcius);
 Fahrenheit=(9*celcius/5)+32;
 printf("value of Fahrenheit is=");
 printf("9*%f/5+32=%f",celcius,Fahrenheit);
}