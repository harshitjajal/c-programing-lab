#include<stdio.h>
float main()
{float bytes,KB,MB,GB;
 printf("enter value of bytes:\n");
 scanf("%f",&bytes);
 KB=bytes/1000;
 printf("value of KB is=");
 printf("%f/1000=%f\n\n",bytes,KB);
 KB=bytes/1000;
 printf("value of KB is=");
 printf("%f/1000=%f\n\n",bytes,KB);
 MB=bytes/1000000;
 printf("value of MB is=");
 printf("%f/1000000=%f\n\n",bytes,MB);
 GB=bytes/1000000000;
 printf("value of GB is=");
 printf("%f/1000000000=%f\n\n",bytes,GB);
}