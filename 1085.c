#include <stdio.h>

int main() {
	int a,b,n,i;
	long c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d", &a, &b);
		c=(long)(a+b);
		printf("%d\n", c);
	}
	return 0;
}