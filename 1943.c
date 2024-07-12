#include <stdio.h>
#define N 10000

int main()
{
	int n,m,i,j,k,l;
	scanf("%d%d",&n,&m);
	char a[n][N];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&l);
		for(j=0;j<l;j++)
			scanf("%c",&a[i][j]);
		a[i][l]='\0';
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&k);
		for(j=0;a[k-1][j]!='\0';j++)
			printf("%c",a[k-1][j]);
		printf("\n");
	}
	return 0;
}