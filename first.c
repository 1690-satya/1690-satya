#include<stdio.h>
 static int x=100;  /* see if we use static keyword then the result is as same as when we use only int x=0 ; But we can't use auto keyword here
also we can't write static int x ;and then write x=10 ; */
void f()
{
  ++x;
  printf("%d",x);
   }
 void  g()
   {
      ++x;
      printf("%d",x);
   }
   void main()
   {
f();
g();
++x;
printf("%d",x);
   }


