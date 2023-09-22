#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The number is negative.\n");
    } else if (num == 0) {
        printf("The number is zero.\n");
    } else if (num > 0 && num < 10) {
        printf("The number is positive and less than 10.\n");
    } else if (num >= 10) {
        printf("The number is greater than or equal to 10.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
