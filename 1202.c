#include<stdio.h>
#include<string.h>

int main()
{
	char str[15],substr[4];
	int i,l,max,j,t=0;
	char ch=0;
	while(scanf("%s",str)!=EOF&&scanf("%s",substr)!=EOF)
	{
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>ch)
			{
				ch=str[i];
				max=i;
			}
		}
		for(i=0;i<=max;i++)
		{
			printf("%c",str[i]);
		}
		printf("%.3s",substr);
		for(i=max+1;i<l;i++)
		{ 
			printf("%c",str[i]);
		}
		printf("\n");
		ch=0;
		
	}
	return 0;
}