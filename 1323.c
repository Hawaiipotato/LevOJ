#include<stdio.h>

int ccnd(int n)
{
	int a[25]={0,1,2};
	int i=3;
	for(;i<n+1;i++)
		a[i]=a[i-1]+a[i-2];
	return a[n];
}
int main()
{
	int n;
	while(~scanf("%d",&n))
		printf("%d\n",ccnd(n));
	return 0;
}