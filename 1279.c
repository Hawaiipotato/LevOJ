#include <stdio.h>
int main()
{
	int x,l,n;
	scanf("%d",&x);
	for(;x--;)
	{
		scanf("%d%d",&l,&n);
		int i,a,max,mmax=0,min,mmin=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			max=a>l-a?a:l-a;
			min=a<l-a?a:l-a;
			if(max>mmax) mmax=max;
			if(min>mmin) mmin=min;
		}
		printf("%d %d\n",mmin,mmax);
	}
	return 0;
}
