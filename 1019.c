#include <stdio.h>

int main() {
	char s1[501], s2[501];
	int i;
	fgets(s1, sizeof(s1), stdin);
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] += 32;
		s2[i] = s1[i];
		printf("%c", s2[i]);
	}
	return 0;
}