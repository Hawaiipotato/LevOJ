#include <stdio.h>
#include <math.h>

int G(int n)
{
	int i, p = 1;
	for (i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0)
				{
					p = 0;
				}
		}
	return p;
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
		{
			int i;
			for (i = 2; i <= n / 2; i++)
				{
					int x = i, y = n - i;
					int p = 1, q = 1;
					p = G(x);
					q = G(y);
					if (p == 1 && q == 1)
						{
							printf("%d+%d\n", x, y);
							break;
						}
				}
		}
	return 0;
}

