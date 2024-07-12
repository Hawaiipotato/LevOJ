#include <stdio.h>

int fun(int b)
{
	int i,j,m,n,t;
	char p,a[4];
	for(i=3;i>=0;i--)
	{
		a[i]=b%10;
		b/=10;
	}
	for(i=1;i<4;i++)
		for(j=0;j<4-i;j++)
			if(a[j]-a[j+1]>0)
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
	m=1000*a[3]+100*a[2]+10*a[1]+a[0];
	n=1000*a[0]+100*a[1]+10*a[2]+a[3];
	t=m-n;
	return t;
}

int main()
{
	int t,i;
	while(~scanf("%d",&t))
	{
		i=0;
		while(t!=6174)
		{
			t=fun(t);
			i++;
		}
		printf("%d\n",i);
	}
	return 0;
}