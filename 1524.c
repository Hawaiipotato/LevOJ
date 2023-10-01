#include <stdio.h>

int main() {
	int a;
	for (a = 100; a <= 200;)
		if (a % 3 != 0) {
			printf("%6d", a);
			a++;
		} else if (a % 9 == 0) {
			printf("\n");
			a++;
		} else
			a++;
	return 0;
}