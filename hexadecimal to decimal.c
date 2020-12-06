#include<stdio.h>
#include<math.h>
#include<conio.h>
int convert (int);
int main (){
  int a, x;
  printf ("Enter the Hexadecimal value to convert into Decimal:\n");
  scanf ("%d", &a);
  x = convert (a);
  printf ("Decimal=%d", x);
  return 0;
}
int convert (int a){
  int deci=0,i=0;
  while(a!=0){
      deci=deci+a%10*pow(16,i);
      ++i;
      a=a/10;
  }
  return deci;
}
