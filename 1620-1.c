#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int flag[1000], N, i, value, count = 0;
	memset(flag, 0, sizeof(flag));
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &value);
		flag[abs(value)]++;
		if (flag[abs(value)] == 2)
			count++;
	}
	printf("%d", count);
	return 0;
}