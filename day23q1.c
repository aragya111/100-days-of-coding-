//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

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
        sum += (2.0 * i) / (4.0 * i - 1.0); /* term: 2i / (4i - 1) */
    }

    printf("Sum of series up to %d terms = %.6f\n", n, sum);
    return 0;
}
