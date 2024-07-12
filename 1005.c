#include <stdio.h>

int main() {
	int a, b, c, d, i;
	scanf("%d", &d);
	for (i = 0; i < d; i++) {
		scanf("%d %d", &a, &b);
		do {
			c = a % b;
			a = b;
			b = c;
		} while (c != 0);
		printf("%d\n", a);
	}
	return 0;
}