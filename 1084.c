#include <stdio.h>

int main() {
	int a,b;
	long c;
	while (scanf("%d %d", &a, &b) != EOF) {
		c=(long)(a+b);
		printf("%d\n", c);
	}
	return 0;
}