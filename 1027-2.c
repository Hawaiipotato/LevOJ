#include<stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int k = m;
	while(k++)
	{
		int c = 0;
		int flag = 1;
		for(int i = 0;i < m;i++)
		{
			c = (c+k-1)%(2*m-i);
			if(c<m)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			printf("%d",k);
			return 0;
		}
	}
	return 0;
}