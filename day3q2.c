//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}