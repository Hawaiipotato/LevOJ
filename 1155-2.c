#include<stdio.h>
int main()
{	
	int a,i,b,n,s=0,j,t,x=1;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
	{
			scanf("%d %d",&a,&b);
			for(i=1;i<=a;i++)
			{
				for(j=1;j<=b;j++)
				{
					x*=i;
					
				}
			s+=x;
			x=1;
			}	
			printf("%d\n",s%10000);	
			s=0;					
		}
	}
	return 0;
}