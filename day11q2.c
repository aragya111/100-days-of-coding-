
#include <stdio.h>

int main() {
	float cp, sp, percent;
	printf("Enter cost price: ");
	scanf("%f", &cp);
	printf("Enter selling price: ");
	scanf("%f", &sp);

	if (sp > cp) {
		percent = ((sp - cp) / cp) * 100;
		printf("Profit Percentage = %.2f%%\n", percent);
	} else if (cp > sp) {
		percent = ((cp - sp) / cp) * 100;
		printf("Loss Percentage = %.2f%%\n", percent);
	} else {
		printf("No profit, no loss.\n");
	}
	return 0;
}

