#include <stdio.h>
#include <math.h>

int Digit(int num)
{
	int i = 0;
	double d = 1.0;
	for (i = 1; i <= num; i++)
		{
			d += log10(1.0 * i);
		}
	return (int)d;
}

int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		{
			int num = 0;
			scanf("%d", &num);
			int d = Digit(num);
			printf("%d\n", d);
		}
	return 0;
}