#include <stdio.h>
int main() {
    int n,sum;
    printf("enter any number");
    scanf("%d",&n);
 sum = (n * (n + 1)) / 2;

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; 
    }