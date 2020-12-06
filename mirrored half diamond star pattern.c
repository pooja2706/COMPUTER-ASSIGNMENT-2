 #include<stdio.h>
#include<math.h>
int main(){
    int i,s,n,j,x,z;
    printf("This is program of half diamond star pattern\n");
    for(i=1;i<=5;i++){
        for(s=5;s>i;s--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    for(x=1;x<=4;x++){
        for(z=1;z<=x;z++)
        printf(" ");
        for(n=4;n>=x;n--)
        printf("* ");
        printf("\n");
    }
    return 0;
}
