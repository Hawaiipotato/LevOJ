#include <stdio.h>
#include <string.h>

void longWord(char str[]) {
	char Word[20];
	char temp[20];
	int longL = 0;
	int tempL = 0;
	int i, j, k;

	for (i = 0, j = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
			temp[j++] = str[i];
			tempL++;
		} else if (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t') {
			temp[j] = '\0';
			if (tempL > longL) {
				longL = tempL;
				strcpy(Word, temp);
			}

			tempL = 0;
			j = 0;
		}
	}

	printf("%s\n", Word);
}

void shortWord(char str[]) {
	char Word[20];
	char temp[20];
	int shortL = 500;
	int tempL = 0;
	int i, j, k;

	for (i = 0, j = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
			temp[j++] = str[i];
			tempL++;
		} else if (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t') {
			temp[j] = '\0';
			if (tempL < shortL) {
				shortL = tempL;
				strcpy(Word, temp);
			}

			tempL = 0;
			j = 0;
		}
	}

	printf("%s\n", Word);
}

int main() {
	char str[60];
	fgets(str, sizeof(str), stdin);
	longWord(str);
	shortWord(str);
	return 0;
}