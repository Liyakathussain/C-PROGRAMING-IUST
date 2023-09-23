#include<stdio.h>
int main()
{  int number;
    printf("enter any number");
    scanf("%d",& number);
     switch (number % 2)
    {
    case 0:
        printf("even number");
        break ;
    case 1:
        printf("odd number");
        break;
    default :
        printf("none");
        break;
    }
    return 0;
}