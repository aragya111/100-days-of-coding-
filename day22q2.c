#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1.0;
        else
            sum += (double)(2 * i - 1) / (double)(2 * i);
    }

    printf("Sum of series up to %d terms = %.6f\n", n, sum);
    return 0;
}

