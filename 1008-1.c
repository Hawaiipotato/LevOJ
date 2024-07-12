#include <stdio.h>

int main() {
	int i, m = 0, n;
	while (scanf("%d", &n) != EOF) {
		for (i = 2; i < n; i++)
			if (n % i == 0)
				m == 1;
		if (m == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}