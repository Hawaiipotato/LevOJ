#include <stdio.h>

int prime(int n)
{
	int i, m = 1;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			m = 0;
	return m;
}

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i, m = 0;
		for (i = 2; i < n; i++)
			if (n % i == 0 && prime(i) && prime(n/i))
				m = 1;
		if (m == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}