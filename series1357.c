#include <stdio.h>
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i+2) {
        printf("%d ", i);
    }

    return 0;
}
