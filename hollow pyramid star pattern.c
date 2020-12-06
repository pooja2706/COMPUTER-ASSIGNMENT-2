#include<stdio.h>
int main(){
int i, j, k, num;
printf("Enter a number : ");
scanf("%d", &num);
printf("\n");
for(i = 1; i <= num; i++){
for(k = 0; k < num-i; k++){
printf(" ");
}
for(j = 1; j <= (2 * i - 1); j++){
if(i == num || j == 1 || j == (2*i-1)){
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
return 0;
}
