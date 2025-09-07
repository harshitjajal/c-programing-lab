#include<stdio.h>
float main()
{float L,B,area,perimeter;
 printf("enter value of L and B:\n");
 scanf("%f%f",&L,&B);
 area=L*B;
 perimeter=2*(L+B);
 printf("value of area is=");
 printf("%f*%f=%f\n\n",L,B,area);
 printf("value of perimeter is=");
 printf("2*(%f+%f)=%f",L,B,perimeter);
}