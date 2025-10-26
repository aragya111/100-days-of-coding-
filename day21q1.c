//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    unsigned long long temp;
    int digit;
    unsigned long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) return 0;

    if (num < 0) num = -num;
    temp = (unsigned long long)num;

    if (temp == 0) {
        printf("No odd digits found.\n");
        return 0;
    }

    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 == 1) {
            product *= digit;
            found = 1;
        }
        temp /= 10;
    }

    if (found)
        printf("Product of odd digits is: %llu\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
