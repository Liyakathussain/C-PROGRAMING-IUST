#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first n natural numbers is: %d\n",sum);

    return 0;
}
