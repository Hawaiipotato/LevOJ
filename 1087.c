#include <stdio.h>

int main() {
	int a,b,c,i;
	scanf("%d", &a);
	while(a!=0)
	{
		c=0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b);
			c+=b;
		}
		printf("%d\n", c);
		
		scanf("%d", &a);
	}
	return 0;
}