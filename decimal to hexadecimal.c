#include<stdio.h>
#include<math.h>
#include<conio.h>
int convert (int);
int main (){
  int a, x;
  printf ("Enter the Decimal value to convert into Hexadecimal : \n");
  scanf ("%d", &a);
  x = convert (a);
  printf ("Hexadecimal=%x", x);
  return 0;
}
int convert (int a){
  int bin=0,i=1;
  while (a != 0){
      bin=bin+a%16*i;
      i=i*10;
    a=a/16;
    }
  return bin;
}
