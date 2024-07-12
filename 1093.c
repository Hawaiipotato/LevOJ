#include <stdio.h>

int main() {
	int a,b,n,i;
	char s;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("\n%c%d%d", &s, &a, &b);
		if(s=='+')
			printf("%d\n", a + b);
		else if(s=='-')
			printf("%d\n", a - b);
		else if(s=='*')
			printf("%d\n", a * b);
		else if(a%b)
			printf("%.2f\n",(double)a/b);
		else
			printf("%d\n",a/b);
	}
	return 0;
}