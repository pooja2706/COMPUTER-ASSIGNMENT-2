#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter Three sides of triangle to check whether it is equilateral, isosceles,scalene triangle\n");
    printf("Enter first side: ");
    scanf("%d",&a);
     printf("Enter second side: ");
    scanf("%d",&b);
     printf("Enter third side: ");
    scanf("%d",&c);
    if(a==b&&b==c)
    {
    printf("Triangle is equilateral ");
    }
    else if(a==b||a==c||b==c)
    {
    printf("Triangle is isosceles");
    }
    else if(a!=b||b!=c)
    {
    printf("Triangle is scalene");
    }

   return 0;

   }
