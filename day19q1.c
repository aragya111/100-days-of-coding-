//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == 0 || b == 0) {
        printf("LCM is not defined for zero.\n");
        return 0;
    }

    max = (a > b) ? a : b;

    // Find the LCM by checking multiples of the maximum
    lcm = max;
    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
