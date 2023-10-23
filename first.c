#include<stdio.h>
 static int x=0;
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


