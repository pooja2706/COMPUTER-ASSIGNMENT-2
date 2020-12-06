#include<stdio.h>
#include<math.h>
int main (){
  int i, j, z;
  printf ("This is program of Number pattern 1\n");
  for (i = 1; i <= 5; i++){
      if (i == 1 || i == 3 || i == 5)
	printf ("1");
      else
	printf ("0");
      if (i == 1 || i == 3 || i == 5)
	printf ("0");
      else
	printf ("1");
      if (i == 1 || i == 3 || i == 5)
	printf ("1");
      else
	printf ("0");
      if (i == 1 || i == 3 || i == 5)
	printf ("0");
      else
	printf ("1");
      if (i == 1 || i == 3 || i == 5)
	printf ("1");
      else
	printf ("0");
      printf ("\n");
    }
  return 0;
}
