#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	printf("Please enter kilometers: ");
	scanf("%f", &num1);
	num2 = num1 / 1.609;
	printf("%.1f km is equal to %.1f miles.", num1, num2);
	return 0;
}