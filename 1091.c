#include <stdio.h>

int main() {
	int a,b,c,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a!=0)
		{
			c=0;
			for(j=0;j<a;j++)
			{
				scanf("%d",&b);
				c+=b;
			}
			printf("%d\n\n", c);
		}
	}
	return 0;
}