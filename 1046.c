#include<stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i,a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("%d",a[(n-1)/2]);
	}
	return 0;
}