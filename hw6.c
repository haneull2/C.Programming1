#include <stdio.h>

int main(void) {
	int arr[5];
	int odd[5];
	int even[5];
	int oddidx = 0, evenidx = 0;

	printf("Please input five integers: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[evenidx++] = arr[i];
		}
		else {
			odd[oddidx++] = arr[i];
		}
	}
	printf("\n");

	printf("Odd numbers: ");
	for (int i = 0; i < oddidx; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");

	printf("Even numbers: ");
	for (int i = 0; i < evenidx; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");
	return 0;
}