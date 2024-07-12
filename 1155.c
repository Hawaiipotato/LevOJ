#include <stdio.h>

int main()
{
	int a,b,n,i,j,s=0,t=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(;n--;)
		{
			scanf("%d%d",&a,&b);
			for(i=1;i<=a;i++)
			{
				for(j=1;j<=b;j++)
				{
					t*=i;
					if(t>10000)
						t%=10000;
				}
				s+=t;
				t=1;
			}
			printf("%d\n",s%10000);
			s=0;
		}
	}
	return 0;
}