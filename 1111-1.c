#include <stdio.h>

int main()
{
	int a, c, d, e, f, g, l, kai[1000];
	while (scanf("%d%d", &a, &c) != EOF)
	{
		e = 0;
		for (g = 1; g <= a; g++)
		{
			l = 0;
			for (d = 2; d <= c; d++)
				if (g % d == 0)
					l++;
			if (l % 2 == 0)
				kai[e++] = g;
		}
		for (f = 0; f < e; f++)
			printf("%d\n", kai[f]);
	}
	return 0;
}