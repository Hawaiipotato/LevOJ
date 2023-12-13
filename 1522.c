#include <stdio.h>

int main() {
	int a, b, c;
	printf("---------------------------------------\n");
	for (a = 1; a <= 9; a++)
		printf("%4d", a);
	printf("\n---------------------------------------\n");
	for (b = 1; b <= 9; b++) {
		printf("%d", b);
		for (c = 1; c <= 9; c++)
			printf("%4d", b * c);
		printf("\n");
	}
	printf("---------------------------------------\n");
	return 0;
}