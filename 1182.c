#include <stdio.h>

int f(int n)
{
	if(n==0)
		return 7;
	else if(n==1)
		return 11;
	else
		return (f(n-1)+f(n-2));
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<35)
		{
			if(f(n)%3==0)
				printf("yes\n");
			else
				printf("no\n");
		}
		else
		{
			if((n+2)%4==0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
