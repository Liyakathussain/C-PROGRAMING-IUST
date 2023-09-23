#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the two numbers using a switch case
    switch (num1 > num2) {
        case 1:
            printf("%d is greater than %d.\n", num1, num2);
            break;
        case 0:
            switch (num2 > num1) {
                case 1:
                    printf("%d is greater than %d.\n", num2, num1);
                    break;
                case 0:
                    printf("Both numbers are equal.\n");
                    break;
            }
            break;
    }

    return 0;
}
