#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the first side of the triangle :");
    scanf("%d",&a);
      printf("Enter the second side of the triangle :");
    scanf("%d",&b);
      printf("Enter the third side of the triangle :");
    scanf("%d",&c);
    if(a+b>c&&a+c>b&&b+c>a)
    printf("This is valid triangle");
    else
    printf("This not a valid triangle");
    return 0;
}
