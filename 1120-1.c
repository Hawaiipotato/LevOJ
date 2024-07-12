#include<stdio.h>
#define N 202

void rev(int a[N], int n);

int main()
{
	int a,c;
	int i, j;
	char m[N], n[N];
	scanf("%d",&a);
	while (a != 0)
	{
		c = 0;
		scanf("%s", m);
		scanf("%s", n);
		int e[N] = { 0 }, f[N] = { 0 }, r[N] = { 0 };
		for (i = 0; m[i] != '\0'; i++)
		{
			e[i] = m[i] - '0';
		}
		for (j = 0; n[j] != '\0'; j++)
		{
			f[j] = n[j] - '0';
		}
		rev(e, i);
		rev(f, j);
		
		for (int k = 0; k < N; k++)
		{
			int sum = e[k] + f[k] + c;
			if (sum >= 10)
			{
				r[k] = sum % 10;
				c = 1;
			}
			else
			{
				c = 0;
				r[k] = sum;
			}
		}
		int mk;
		for (int k = N-1; k >= 0; k--)
		{
			if (r[k] != 0)
			{
				mk = k;
				break;
			}
		}
		for (int k = mk; k >= 0; k--)
		{
			printf("%d", r[k]);
		}
		printf("\n");
		
		a--;
	}
}
 
void rev(int a[N], int n)
{
	int i = 0, j = n - 1;
	int temp;
	while (i != j && i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}