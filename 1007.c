#include <stdio.h>
int fun(int a, int b);

int main() {
	int a, b, c, n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int m;
		scanf("%d %d %d", &a, &b, &c);
		m = fun(a, fun(b, c));
		printf("%d\n", m);
	}
	return 0;
}

int fun(int a, int b) {
	int m;
	while (a % b) {
		m = a % b;
		a = b;
		b = m;
	}
	return b;
}