#include <stdio.h>

int main( )
{
	int i = 0, n;
	while (scanf("%d", &n) != EOF)
		{
			while (n != 1)
				{
					if (n % 2 == 0)
						n = n / 2;
					else
						n = (3 * n + 1) / 2;
					i += 1;
				}
			printf("%d\n", i);
			i = 0;
		}
	return 0;
}

