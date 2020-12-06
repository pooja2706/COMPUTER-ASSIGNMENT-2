#include <stdio.h>
int main(){
    int  num,binary,decimal=0,a=1,rem;
    printf("Enter a binary number:");
    scanf("%d", &num);
    binary=num;
    while(num > 0){
        rem = num % 10;
        decimal=decimal+rem*a;
        num=num/10;
        a=a*2;
    }
    printf("Its decimal equivalent is %d \n", decimal);
    return 0;
}
