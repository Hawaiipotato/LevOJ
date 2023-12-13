#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i, m, n;
	while (scanf("%d", &n) != EOF) {
		m = sqrt((float)n);
		for (i = 2; i <= m; i++)
			if (n % i == 0)
				break;
		if (i > m)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}