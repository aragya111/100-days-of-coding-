//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swapping without using a third variable
    num1 = num1 + num2; // Step 1: Add both numbers and store the result in num1
    num2 = num1 - num2; // Step 2: Subtract the new num1 by num2 to get the original num1
    num1 = num1 - num2; // Step 3: Subtract the new num1 by the new num2 to get the original num2

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}