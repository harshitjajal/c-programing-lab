#include<stdio.h>
float main()
{float ns,gs,a,d;
 printf("enter value of gross salary:\n");
 scanf("%f",&gs);
 if(gs>10000)
 {a=10.0/100*gs;
  d=3.0/100*gs;
 }
 else if(gs>5000)
 {a=7.0/100*gs;
  d=2.0/100*gs;
 }
 else
 {a=0;
  d=0;
 };
 ns=gs+a-d;
 printf("net salary =");
 printf("%f+%f-%f=%f",gs,a,d,ns);
 }