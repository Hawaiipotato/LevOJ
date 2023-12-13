#include <stdio.h>

int main() {
	int n, a, b, c;
	scanf("%d", &n);
	for (a = 1; a < n; a++) {
		for (b = 1; b < n; b++) {
			for (c = 1; c < n; c++) {
				if (a + b + c == n && 5 * a + 3 * b + 0.5 * c == n)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}

