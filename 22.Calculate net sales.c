#include<stdio.h>
float main()
{float ns,gs,d;
 printf("enter value of gross sales :\n");
 scanf("%f",&gs);
 d=(10.0/100)*gs;
 printf("so your discount is= %f\n\n",d);
 ns=gs-d;
 printf("value of net sales is=");
 printf("%f-%f=%f",gs,d,ns);
}