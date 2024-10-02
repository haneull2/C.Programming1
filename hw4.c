#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, prime, i, count = 0;
	printf("Please enter a number: ");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		prime = number % i;
		if (prime == 0)
			count += 1;
	}
	if (count == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
}