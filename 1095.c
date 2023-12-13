#include <stdio.h>

int main( )
{
	int a, b, n, min, max, s;
	float ave;
	scanf("%d", &a);
	for (; a > 0;)
		{
			n = 0;
			s = 0;
			scanf("%d", &b);
			min = b;
			max = b;
			while (b > 0)
				{
					s += b;
					n += 1;
					if (b > max)
						max = b;
					if (b < min)
						min = b;
					scanf("%d", &b);
				}
			ave = (float)s / (float)n;
			printf("%d\n%d\n%d\n%.1f\n", n, max, min, ave);
			a--;
		}
	return 0;
}

