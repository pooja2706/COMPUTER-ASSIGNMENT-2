#include <stdio.h>
int main(){
    int binary,octal=0,j=1,a;
    printf("Enter the value for  binary number:");
    scanf("%d",&binary);
    while(binary!=0){
        a=binary%10;
        octal= octal+a*j;
        j=j*2;
        binary=binary/ 10;
    }
    printf("Equivalent octal value: %o", octal);
    return 0;
}
