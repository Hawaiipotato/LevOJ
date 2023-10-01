#include <stdio.h>

int main() {
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF) {
		if (x == y)
			printf("x==y");
		else if (x > y)
			printf("x>y");
		else
			printf("x<y");
	}
	return 0;
}