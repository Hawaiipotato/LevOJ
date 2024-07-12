#include <stdio.h>
#include <string.h>

int altitude[102][102];
int longestRoute[102][102];
int m, n;

int count(int i, int j) {
	int max = 0;
	if (longestRoute[i][j] > 0)
		return longestRoute[i][j];
	if (i - 1 >= 0 && altitude[i][j] > altitude[i - 1][j] && max < count(i - 1, j))
		max = count(i - 1, j);
	if (j - 1 >= 0 && altitude[i][j] > altitude[i][j - 1] && max < count(i, j - 1))
		max = count(i, j - 1);
	if (i + 1 < m && altitude[i][j] > altitude[i + 1][j] && max < count(i + 1, j))
		max = count(i + 1, j);
	if (j + 1 < n && altitude[i][j] > altitude[i][j + 1] && max < count(i, j + 1))
		max = count(i, j + 1);
	longestRoute[i][j] = max + 1;
	return longestRoute[i][j];
}

int main() {
	while (scanf("%d%d", m, n) != EOF) {
		int maxResult = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				scanf("%d", altitude[i][j]);
				longestRoute[i][j] = 0;
			}
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				longestRoute[i][j] = count(i, j);
				if (maxResult < longestRoute[i][j])
					maxResult = longestRoute[i][j];
			}
		printf("%d", maxResult);
	}
	return 0;
}
