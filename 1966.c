#include <stdio.h>
#define N 100
#define M 2000
int main()
{
	int i,j,n,count[N];
	int no[N][M];
	int k,number,door;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&count[i]);
	for(i=0;i<n;i++)
		for(j=0;j<count[i];j++)
			scanf("%d",&no[i][j]);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&number,&door);
		for(j=count[door-1];j>0;j--)
			no[door-1][j]=no[door-1][j-1];
		no[door-1][0]=number;
		count[door-1]++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<count[i];j++)
			printf("%d ",no[i][j]);
		printf("\n");
	}
	return 0;
}