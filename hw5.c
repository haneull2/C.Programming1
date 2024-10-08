#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binary_conversion(int num) {
	if (num > 0) {
		binary_conversion(num / 2);
		printf("%d", num % 2);
	}
}

int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	binary_conversion(num);
	return 0;
}