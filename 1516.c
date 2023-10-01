#include <stdio.h>

int main() {
	int a, b, c, i;
	scanf("%d", &i);
	for (; i > 0; i--) {
		scanf("%d %d %d", &a, &b, &c);
		if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
			printf("Not Triangle\n");
		else if (a == b & b == c)
			printf("Regular Triangle\n");
		else if (a == b || b == c || a == c)
			printf("Isosceles Triangle\n");
		else
			printf("Triangle\n");
	}
	return 0;
}