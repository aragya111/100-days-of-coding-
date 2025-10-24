#include <stdio.h>

int main() {
    long long num, temp;
    int digit;
    long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) return 0;

    if (num < 0) num = -num;
    temp = num;

    if (temp == 0) {
        printf("No odd digits found.\n");
        return 0;
    }

    while (temp != 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        temp /= 10;
    }

    if (found)
        printf("Product of odd digits is: %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
