#include <stdio.h>

int fun(int n)
{
	int a = 1;
	if (n != 0)
		for (; n >= 1; n--)
			a *= n;
	return a;
}

int main()
{
	int a, b, s = 0;
	while (scanf("%d", &a) != EOF)
		{
			for (b = 0; b <= a; b++)
				s += fun(b);
			printf("%d\n", s);
			s = 0;
		}
	return 0;
}