#include <stdio.h>
#include <math.h>

int main() {
    double num, square;

    printf("Enter a number: ");
    scanf("%lf", &num);

    square = pow(num, 2);  // Using pow() function to calculate square

    printf("Square of %lf is: %lf\n", num, square);

    return 0;
}
