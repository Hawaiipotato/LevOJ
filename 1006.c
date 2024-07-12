#include <stdio.h>

int main() {
	int a, b, m, n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int c, d;
		scanf("%d%d", &a, &b);
		c = a;
		d = b;
		while (a % b != 0) {
			m = a % b;
			a = b;
			b = m;
		}
		printf("%d\n", c * d / b);
	}
	return 0;
}