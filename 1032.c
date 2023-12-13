#include <stdio.h>

int main() {
	int a, b, c, d, i, j;
	double p = 0;
	int s = 0, n = 0;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d %d", &b, &c);
		for (j = 0; j < b; j++) {
			scanf("%d", &d);
			if (d > c) {
				s = s + d;
				n = n + 1;
			}
		}
		if (n == 0) {
			printf("-1\n");
		} else {
			p = (double)s / n;
			printf("%.2lf\n", p);
		}
		p = 0;
		s = 0;
		n = 0;
	}
	return 0;
}