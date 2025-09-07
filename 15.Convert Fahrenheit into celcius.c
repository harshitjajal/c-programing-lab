#include<stdio.h>
float main()
{float celcius,Fahrenheit;
 printf("enter value of Fahrenheit:\n");
 scanf("%f",&Fahrenheit);
 celcius=(5*(Fahrenheit-32)/9);
 printf("value of celcius is=");
 printf("5*(%f-32)/9=%f",Fahrenheit,celcius);
}