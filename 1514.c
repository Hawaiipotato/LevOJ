#include <stdio.h>

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		if (a >= 90)
			printf("��");
		else if (a < 90 && a >= 80)
			printf("��");
		else if (a < 80 && a >= 70)
			printf("��");
		else if (a < 70 && a >= 60)
			printf("����");
		else
			printf("������");
	}
	return 0;
}