#include<stdio.h>
#include<math.h>
int main (){
  int i;
  printf ("This is program of number pattern\n");
  for (i = 1; i <= 5; i++){
      printf ("1");
      if (i == 1 || i == 5)
	printf ("111");
      else
	printf ("000");
      printf ("1");
      printf ("\n");
    }
}
