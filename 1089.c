#include <stdio.h>

int main() {
	int a,b,c,i;
	while(scanf("%d", &a)!=EOF)
	{
		c=0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b);
			c+=b;
		}
		printf("%d\n", c);
	}
	return 0;
}