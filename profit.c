#include <stdio.h>
//calculation of profit.
int main()
{
    float totalrevenue, totalexpenses;
    printf("enter the totalrevenue , totalexpenses \t");
    scanf("%f %f", &totalrevenue, &totalexpenses);
    float profit = totalrevenue - totalexpenses;
    printf("the total profit is %f\n", profit);

    return 0;
}