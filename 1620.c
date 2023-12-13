#include <stdio.h>

int main() {
	int b, c, n, i, s = 0;
	scanf("%d", &n);
	int a[n + 1];
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (b = 1; b < n; b++) {
		for (c = b + 1; c <= n; c++) {
			if (a[b] + a[c] == 0)
				s += 1;
		}
	}
	printf("%d", s);
	return 0;
}