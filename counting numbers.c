#include <stdio.h>

int main() {
    // Write C code here
int num,i=0,k;
printf("Enter the number:");
scanf("%d",&num);
while(num>0){
    k=num%10;
    num=num/10;
    i++;
}printf("%d",i);
    return 0;
}
