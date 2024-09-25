#include <stdio.h>

int main(void) {
	int s = 1, n, i;
	for (; s <= 9; s += 2) {
		n = 4, i = 0;
		for (; n > (s / 2); n--) {
			printf(" ");
		}
		for (; i < s; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}