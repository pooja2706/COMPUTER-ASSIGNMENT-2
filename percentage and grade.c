#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,sum,Percentage;
    printf("Enter the marks of Physics: ");
    scanf("%d",&a);
 printf("Enter the marks of Chemistry: ");
    scanf("%d",&b);
     printf("Enter the marks of Biology: ");
    scanf("%d",&c);
     printf("Enter the marks of Mathematics: ");
    scanf("%d",&d);
     printf("Enter the marks of Computer: ");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    Percentage=sum/5;
    if(Percentage>=90)
    printf("Percentage=%d percent\n Grade=A",Percentage);
    else if(Percentage>=80)
    printf("Percentage=%d percent\n Grade=B",Percentage);
    else if(Percentage>=70)
    printf("Percentage=%d percent\n Grade=C",Percentage);
    else if(Percentage>=60)
    printf("Percentage=%d percent\n Grade=D",Percentage);
    else if(Percentage>=40)
    printf("Percentage=%d percent\n Grade=E",Percentage);
    else if(Percentage<40)
    printf("Percentage=%d percent\n Grade=F",Percentage);

    return 0;
}
