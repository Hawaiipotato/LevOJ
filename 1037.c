#include <stdio.h>

int main() {
	int a, b, i, s = 0;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &b);
		s = s + b;
	}
	printf("%d\n", s);
	return 0;
}