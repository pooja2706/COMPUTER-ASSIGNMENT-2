#include <stdio.h>
int main(){
    int binary,hexadecimal=0,i=1,rem;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    while (binary!= 0){
        rem=binary%10;
        hexadecimal=hexadecimal+rem*i;
        i=i*2;
        binary=binary/10;
    }
    printf("Equivalent hexadecimal value: %X", hexadecimal);
    return 0;
}
