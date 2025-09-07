#include<stdio.h>
float main()
{float interest,P,R,N;
 printf("enter value of P,R,N:\n");
 scanf("%f%f%f",&P,&R,&N);
 interest= P*R*N/100;
 printf("value of interest is=");
 printf("%f*%f*%f/100=%f",P,R,N,interest);
}