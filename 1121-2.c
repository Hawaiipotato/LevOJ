#include<stdio.h>
#define N 202

void reverse_order(int array[N], int n);
 
int main()
{
	int i, j;
	char num1[N], num2[N];
	while (scanf("%s", num1) != EOF)
	{
		scanf("%s", num2);
		int e1[N] = { 0 }, e2[N] = { 0 }, result[N] = { 0 };
		for (i = 0; num1[i] != '\0'; i++)
		{
			e1[i] = num1[i] - '0';
		}
		for (j = 0; num2[j] != '\0'; j++)
		{
			e2[j] = num2[j] - '0';
		}
		reverse_order(e1, i);
		reverse_order(e2, j);
 
 
 
 
		for (int k = 0; k < N; k++)
		{
			int differ = e1[k] - e2[k];
			if (differ<0)
			{
				result[k] = e1[k] + 10 - e2[k];
				e1[k + 1]--;
			}
			else
			{
				result[k] = differ;
			}
 
		}
		int mark=0;
		for (int k = N - 1; k >= 0; k--)
		{
			if (result[k] != 0)
			{
				mark = k;
				break;
			}
		}
		for (int k = mark; k >= 0; k--)
		{
			printf("%d", result[k]);
		}
		printf("\n");
 
 
 
	}
}
 
void reverse_order(int array[N], int n)
{
	int i = 0, j = n - 1;
	int temp;
	while (i != j && i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
 
	}
}