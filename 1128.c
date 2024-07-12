#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int a[1000] = { 0 };
		int i = 0;
		int count = 0;
		int t = 0;
		for (i = 1; i <= n; i++)
		{
			a[i] = 1;
		}
		for (i = 1; t < n; i++)
		{
			count += a[i];
			if ((count % m == 0)&&count!=0)
			{
				printf("%d ", i);
				count = 0;
				a[i] = 0;
				t++;
			}
			i %= n;
		}
		printf("\n");
	}
	return 0;
}