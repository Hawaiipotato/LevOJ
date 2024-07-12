#include <stdio.h>
#define N 1000
int main()
{
	int i,j,k,n,p,m;
	int a[N],b[N];
	while(~scanf("%d %d",&n,&k))
	{
		for(i=0;i<=n;i++)
		a[i]=1;
		for(j=2;j<=k;j++)
			for(i=1;i<=n;i++)
				if(i%j==0)
					a[i]=1-a[i];
		for(i=1;a[i];i++);
		printf("%d",i);
		for(i++;i<=n;i++)
			if(!a[i])
				printf(" %d",i);
		printf("\n");
	}
	return 0;
 } 