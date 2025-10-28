#include <stdio.h>

int main(void) {
    unsigned long long num, temp, sum = 0;
    int digit;
    const int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};

    printf("Enter a non-negative integer: ");
    if (scanf("%llu", &num) != 1) return 0;

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += fact[digit];
        temp /= 10;
    }

    if (sum == num)
        printf("%llu is a Strong number.\n", num);
    else
        printf("%llu is not a Strong number.\n", num);

    return 0;
}