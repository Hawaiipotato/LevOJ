#include<stdio.h>

int main()
{
	int a[10001];
	int l, m, t1, t2, i, j, count;
	while (scanf("%d %d", &l, &m)!=EOF)
	{
		for (i = 0; i <= l; i++)
			a[i] = 0;
		for (i = 0; i < m; i++)
		{
			scanf("%d %d", &t1, &t2);
			for (j = t1; j <= t2; j++)
				a[j] = j;
		}
		for (i = count = 0; i <= l; i++)
			if (!a[i])
				count++;
		printf("%d\n", count);
	}
	return 0;
}