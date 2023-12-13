#include <stdio.h>

int main()
{
	int n,k,i,j,t;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<k;j++)
	{
		t=a[0];
		for(i=1;i<n;i++)
			a[i-1]=a[i];
		a[n-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}