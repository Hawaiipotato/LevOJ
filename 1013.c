#include <stdio.h>

int main() {
	int i, n, x = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int a;
		scanf("%d", &a);
		if (a > x)
			x = a;
	}
	printf("%d", x);
	return 0;
}