#include<stdio.h>
#include<math.h>
int main(){
    int i,j,z;
    printf("This is program of Number pattern 1\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
           if(j==1||j==3||j==5)
           printf("0");
           else
           printf("1");
       }
        printf("\n");
    }
    return 0;
}
