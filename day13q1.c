
#include <stdio.h>

int main() {
	int a, b, result;
	char op;
	printf("Enter expression (e.g., 5 + 3): ");
	scanf("%d %c %d", &a, &op, &b);

	switch(op) {
		case '+':
			result = a + b;
			printf("%d + %d = %d\n", a, b, result);
			break;
		case '-':
			result = a - b;
			printf("%d - %d = %d\n", a, b, result);
			break;
		case '*':
			result = a * b;
			printf("%d * %d = %d\n", a, b, result);
			break;
		case '/':
			if (b != 0) {
				printf("%d / %d = %.2f\n", a, b, (float)a / b);
			} else {
				printf("Division by zero error!\n");
			}
			break;
		case '%':
			if (b != 0) {
				result = a % b;
				printf("%d %% %d = %d\n", a, b, result);
			} else {
				printf("Modulo by zero error!\n");
			}
			break;
		default:
			printf("Invalid operator! Use +, -, *, /, or %.\n");
	}
	return 0;
}
