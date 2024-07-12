//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 202

void rev(int a[N], int n);

int main()
{
	int a;
	int i, j;
	char m[N], n[N];
	scanf("%d",&a);
	while (scanf("%s", m) != EOF)
	{
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
			int dif = e[k] - f[k];
			if (dif < 0)
			{
				r[k] = e[k] + 10 - f[k];
				e[k+1]--;
			}
			else
			{
				r[k] = dif;
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