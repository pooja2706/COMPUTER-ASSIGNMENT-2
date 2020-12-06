#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Month no. (1-12) to print no. of days in that month:\n ");
    scanf("%d",&a);
    if(a%4==0||a%6==0||a%10==0||a%12==0)
    printf("There are 30 days in this Month");
    else if(a==2)
    {
        printf("Pls Enter 1. leapyear\n\t\ 2. Non-leapyear:\n");
        scanf("%d",&b);
        if(b==1)
            printf("There are 29 days ");
        else if(b==2)
            printf("There are 28 days");
    }
    else if(a==8)
        printf("There are 31 days in this month");
    else
    printf("There are 31 days in this month");


}
