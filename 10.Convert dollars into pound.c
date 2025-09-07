#include<stdio.h>
float main()
{float dollars,Rs,pound;
 printf("enter value of dollars:\n");
 scanf("%f",&dollars);
 Rs=dollars*48;
 pound=Rs/70;
 printf("value of pound is=");
 printf("%f/70=%f\n",Rs,pound);
}