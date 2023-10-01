#include <stdio.h>

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		if (a >= 90)
			printf("优");
		else if (a < 90 && a >= 80)
			printf("良");
		else if (a < 80 && a >= 70)
			printf("中");
		else if (a < 70 && a >= 60)
			printf("及格");
		else
			printf("不及格");
	}
	return 0;
}