#include<stdio.h>
int main(){
int num1,num2,i=0,k;
printf("Enter the number:");
scanf("%d",&num1);
printf("Enter a digit of the number:");
scanf("%d",&num2);
while(num1>0){
    k=num1%10;
    if(num2==k){
        i++;
    }
    num1=num1/10;
}printf("The frequency of the digit is %d",i);
return 0;
}
