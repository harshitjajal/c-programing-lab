#include<stdio.h>
float main()
{float ns,gs,d;
 printf("enter value of gross sale:\n");
 scanf("%f",&gs);
 if(gs>20000)
 {d=15.0/100*gs;
 }
 else if (gs>10000)
 {d=10.0/100*gs;
 }
 else
 {d=5.0/100*gs;};
 ns=gs-d;
 printf("your discount =%f\n",d);
 printf("net sales=");
 printf("%f-%f=%f",gs,d,ns);
 }
 