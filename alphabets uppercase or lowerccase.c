#include<stdio.h>
int main(){
    char ch,A,Z;
    printf("Enter any character to check whether it is  uppercase or lowercase alphabet:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("%c character is uppercase",ch);
    else if(ch>='a'&&ch<='z')
    printf("%c character is lowercase",ch);
    return 0;
}
