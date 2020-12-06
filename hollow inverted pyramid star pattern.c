#include<stdio.h>
#include<math.h>
int main(){
    int i,s,j;
    printf("This is program of Hollow star pattern printing\n");
    for(i=5;i>=1;i--){
        for(s=5;s>i;s--)
        printf(" ");
        for(j=1;j<=9;j++){
            if(i==5||j==1||j==2*i-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
