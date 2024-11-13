#include <stdio.h>
#include <math.h>

double standard_deviation(double* ptr) {
	double  sum1 = 0, sum2 = 0, average;
	int i;
	for (i = 0; i < 5; i++) {
		sum1 += ptr[i];
	}
	average = sum1 / 5;
	for (i = 0; i < 5; i++) {
		sum2 += pow(ptr[i] - average, 2);
	}
	return sqrt(sum2 / 5);
}

int main(void) {
	double arr[5];
	int i;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}
	printf("Standard Deviation = %.3lf \n", standard_deviation(arr));
	return 0;
}