#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 6 - i; j <= 5; j++)
            printf("%d", j);
        putchar('\n');
    }
    return 0;
}
