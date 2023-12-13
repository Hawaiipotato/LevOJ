#include <stdio.h>

int main() {
	int i, t;
	scanf("%d", &t);
	for (i = 1; i <= t; i++) {
		int a;
		scanf("%d", &a);
		printf("%o\n", a);
	}
}