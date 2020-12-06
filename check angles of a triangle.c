#include<stdio.h>
int main()
{
    int a,b,c,sum=180;
    printf("Enter first angle of triangle: ");
    scanf("%d",&a);
     printf("Enter second angle of triangle: ");
    scanf("%d",&b);
     printf("Enter third angle of triangle: ");
    scanf("%d",&c);
    if(sum==a+b+c)
    printf("The triangle is valid");
    else
    printf("The triangle is not valid");
    return 0;
}
