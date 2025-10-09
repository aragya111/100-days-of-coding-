//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // To store binary digits, assuming 32-bit integer
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
