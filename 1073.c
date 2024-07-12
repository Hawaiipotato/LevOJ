#include <stdio.h>
#include <string.h>
void PrintNumber(char *get,int len,int dl);
int main()
{
	char get[100] = { 0 };
	int i = 0;
	while (scanf("%s", get) != EOF)
	{
		int len = strlen(get);
		if (get[0] == '-')
		{
			printf("-");
			PrintNumber(get, len, 0);
		}
		else
		{
			PrintNumber(get, len, -1);
		}
	}
	return 0;
}
void PrintNumber(char* get, int len, int dl)
{
	int i = 0;
	for (i = len - 1; i > dl; i--)
	{
		if (get[i] == '0')
			continue;
		else
			break;
	}
	if (i != dl)
	{
		for (; i > dl; i--)
		{
			printf("%d", get[i] - '0');
		}
	}
	printf("\n");
}