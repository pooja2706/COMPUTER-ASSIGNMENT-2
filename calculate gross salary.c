#include <stdio.h>
int main()
{
    int basic, gross, da, hra;
    printf("Enter basic salary of an employee: ");
    scanf("%d", &basic);
    if(basic <= 10000)
    {
        da  = basic * 80/100;
        hra = basic * 20/100;
    }
    else if(basic <= 20000)
    {
        da  = basic * 90/100;
        hra = basic * 25/100;
    }
    else
    {
        da  = basic * 95/100;
        hra = basic * 30/100;
    }
    gross = basic + hra + da;
    printf("GROSS SALARY OF EMPLOYEE = %d", gross);
    return 0;
}
