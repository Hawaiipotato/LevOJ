#include <stdio.h>

int main() {
	int a,b,m=8,s,i=0;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(a+b>8&&a+b>m)
		{
			s=i+1;
			m=a+b;
		}
		for(i=1;i<7;i++)
		{
			scanf("%d%d",&a,&b);
			if(a+b>8&&a+b>m)
			{
				s=i+1;
				m=a+b;
			}
		}
	}
	
	return 0;
}