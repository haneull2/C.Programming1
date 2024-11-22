#include <stdio.h>

char change(char ch) {
	int diff = 'a' - 'A';
	if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else {
		return ch;
	}
}

int main(void) {
	char ch;
	int num = 1;
	printf("Input> ");
	while ((ch = getchar()) != '\n') {
		if(num == 1) {
			printf("Output> ");
			num = 0;
		}
		putchar(change(ch));
	}
	putchar('\n');
	return 0;
}