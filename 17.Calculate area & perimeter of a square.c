#include<stdio.h>
float main()
{float L,area,perimeter;
 printf("enter value of L:\n");
 scanf("%f",&L);
 area=L*L;
 perimeter=4*L;
 printf("value of area is=");
 printf("%f*%f=%f\n\n",L,L,area);
 printf("value of perimeter is=");
 printf("%f*4=%f",L,perimeter);
}