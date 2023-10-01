#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	double p, s;
	while (scanf("%f %f %f", &a, &b, &c) != EOF) {
		p = (a + b + c) / 2.0;
		if (a + b <= c || a + c <= b || b + c <= a)
			printf("-1\n");
		else {
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.2lf\n", s);
		}

	}
	return 0;
}