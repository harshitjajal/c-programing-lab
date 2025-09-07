#include<stdio.h>
float main()
{float a,b,c;
 printf("enter value of a,b and c:\n");
 scanf("%f%f%f",&a,&b,&c);
 if(a>b&&a>c)
 {printf("%f is largest\n",a);
   if (b>c)
   {printf("%f is smallest\n",c);}
   else
   {printf("%f is smallest\n",b);}
  
 }
 else if(b>a&&b>c)
 {printf("%f is largest\n",b);
   if (a>c)
   {printf("%f is smallest\n",c);}
   else
   {printf("%f is smallest\n",a);}
 }
  else
  {printf("%f is largest\n",c);
   if(a>b)
    {printf("%f is smallest\n",b);}
   else
  {printf("%f is smallest\n",a);};  
  }
 }