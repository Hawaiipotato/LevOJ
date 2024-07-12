#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n <= 0) {
			printf("Error, wrong number.");
			break;
		}
		while (n) {
			if (n > 7)
				n -= 7;
			if (n <= 7)
				break;
		}
		printf("%d", n);
	}
	return 0;
}