#include<stdio.h>
float main()
{float ns,gs,a,d;
 printf("enter value of gross salary:\n");
 scanf("%f",&gs);
 a=(10.0/100)*gs;
 d=(3.0/100)*gs;
 ns=gs+a-d;
 printf("value of net salary is=");
 printf("%f+%f-%f=%f",gs,a,d,ns);
}