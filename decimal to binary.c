#include<stdio.h>
#include<math.h>
int convert (int);
main (){
  int a, x;
  printf ("Enter the Decimal value to convert into Binary:\n");
  scanf ("%d", &a);
  x = convert (a);
  printf ("binary=%d", x);
  return 0;
}
int convert (int a)
{
  int bin=0,i=1;
  while (a != 0){
      bin=bin+a%2* i;
      i=i*10;
    a=a/2;
    }
  return bin;
}
