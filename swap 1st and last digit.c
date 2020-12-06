#include <stdio.h>

int main() {
    // Write C code here
int num,a,k1,k2,j=1,sum=0,i,num2;
printf("Enter the number:");
scanf("%d",&num);
num2=num;
a=num%10;
while(num>0){
    k1=num%10;
    num=num/10;
}
while(num2>9){
    k2=num2%10;
    sum=sum+k2*j;
    j=j*10;
    num2=num2/10;
}i=(sum-a)/10;
printf("%d%d%d",a,i,k1);
    return 0;
}
