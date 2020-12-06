#include<stdio.h>
#include<math.h>
int main (){
  int i;
  printf ("This is program of number pattern\n");
  for (i = 1; i <= 5; i++){
      printf ("11");
      if (i == 3)
	printf ("0");
      else
	printf ("1");
      printf ("11");
      printf ("\n");
    }
}
