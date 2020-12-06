#include<stdio.h>
#include<math.h>
#include<conio.h>
int convert (int);
int main (){
  int a, x;
  printf ("Enter the Hexadecimal value to convert into Binary:\n");
  scanf ("%d", &a);
  x = convert (a);
  printf ("binary=%d", x);
  return 0;
}
int convert (int a){
  int hexa=0, bin=0,i=0;
  while(a!=0){
      hexa=hexa+a%10*pow(16,i);
      ++i;
      a=a/10;
  }
  i=1;
  while (hexa!= 0){
      bin = bin + hexa % 2* i;
      i = i * 10;
    hexa = hexa / 2;
    }
  return bin;
}
