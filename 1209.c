#include <stdio.h>

int prime(int n)
{
	int i;
	int t = 1;
	for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				t = 0;
		}
	return t;
}

int main()
{
	int m;
	while (scanf("%d", &m) != EOF)
	{
		int i;
		for (i = m; i > 0; i--)
			if (prime(i) == 1 && prime(i + 2) == 1)
			{
				printf("%d %d\n", i, i + 2);
				break;
			}
	}
	return 0;
}