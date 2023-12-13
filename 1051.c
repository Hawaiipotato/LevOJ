#include<stdio.h>

int p(int n)
{
	int i, t = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			t = 0;
	}
	return t;
}

int q(int n)
{
	int s = 0;
	while (n)
	{
		s = s * 10 + n % 10;
		n = n / 10;
	}
	return s;
}

int main()
{
	int i, t;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		int x, y;
		scanf("%d", &x);
		y=q(x);
		if (p(x)*p(y)==1)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}