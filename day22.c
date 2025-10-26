//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main(void) {
    char bin[1024];
    int i;

    printf("Enter a binary number: ");
    if (scanf("%1023s", bin) != 1) return 0;

    /* Validate input */
    for (i = 0; bin[i] != '\0'; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Invalid binary number.\n");
            return 0;
        }
    }

    /* Compute 1's complement by flipping each bit */
    for (i = 0; bin[i] != '\0'; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }

    printf("1's complement: %s\n", bin);
    return 0;
}
