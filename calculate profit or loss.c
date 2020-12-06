#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,profit,loss;
    printf("Enter the Buying Amount: ");
    scanf("%d",&a);
    printf("Enter the selling Amount: ");
    scanf("%d",&b);
    profit=b-a;
    loss=a-b;
    if (b>a)
    printf("Profit=%d percent",100*profit/a);
    else if(b<a)
    printf("Loss=%d percent ",100*loss/a);

    return 0;
}
