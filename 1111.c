#include <stdio.h>

int main()
{
	int n,k,i,j;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		int c[n+1];
		for(j=1;j<=n;j++)
			c[j]=0;
		for(i=1;i<=k;i++)
			for(j=1;j<=n;j++)
				if(j%i==0)
					c[j]++;
		for(j=1;j<=n;j++)
			if(c[j]%2==1)
				printf("%d\n",j);
	}
	return 0;
}