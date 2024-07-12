#include <stdio.h>

int main() {
	char s1[101];
	int i, n;
	scanf("%d", n);
	fgets(s1, sizeof(s1), stdin);
	for (i = n; s1[i] != '\0'; i++) {
		printf("%c", s1[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%c", s1[i]);
	}
	return 0;
}