#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, i, m, n, s = 0;
	while (scanf("%d", &n) != EOF) {
		for (a = 2; a < n; a++) {
			m = sqrt((float)a);
			for (i = 2; i <= m; i++)
				if (a % i == 0)
					break;
			if (i > m)
				s += a;
		}
		printf("%d\n", s);
		s = 0;
	}
	return 0;
}