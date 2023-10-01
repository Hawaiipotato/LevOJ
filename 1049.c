#include <stdio.h>

int main() {
	int a;
	float x, y, s;
	while (scanf("%d %f %f", &a, &x, &y) != EOF) {
		s = x + a % 3 * (int)(x + y) % 2 / 4
		    printf("%.6f", s)
	}
	return 0;
}