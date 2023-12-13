#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
void graftalPicture(char(*graftal)[1000], int dimensions, int x, int y);
int main()
{
	int dimensions = 0;
	while (scanf("%d", &dimensions) != EOF)
	{
		int length = (int)pow(3.0, (double)dimensions - 1);//�������ͼ�ĳ�
		char graftal[1000][1000] = { 0 };
		memset(graftal, ' ', 1000 * 1000);//��ʼ��Ϊ' '
		graftalPicture(graftal, dimensions, 1, 1);
		int i = 0;
		for (i = 1; i <= length; i++)
		{
			int j = 0;
			for (j = 1; j <= length; j++)
			{
				printf("%c", graftal[i][j]);
			}
			printf("\n");
		}
		printf("-\n");
	}
	return 0;
}
void graftalPicture(char(*graftal)[1000], int dimensions, int x, int y)
{
	if (dimensions == 1)//һάֱ�Ӹ�ֵΪ'X'
	{
		graftal[x][y] = 'X';
	}
	else//�ݹ�
	{
		int size = (int)pow(3.0, (double)dimensions - 2);//��һά�ĳ�
		//5�εݹ����
		graftalPicture(graftal, dimensions - 1, x, y);
		graftalPicture(graftal, dimensions - 1, x, y + 2 * size);
		graftalPicture(graftal, dimensions - 1, x + size, y + size);
		graftalPicture(graftal, dimensions - 1, x + 2 * size, y);
		graftalPicture(graftal, dimensions - 1, x + 2 * size, y + 2 * size);
	}
}
