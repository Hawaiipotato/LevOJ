#include<stdio.h>
#include<string.h>

int main()
{
	char a[202],b[202];
	int la,lb,l,i,j,p,n,c[202]={};
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s%s",a,b);
		la=strlen(a);
		lb=strlen(b);
		i=0;p=0;
		for(l=la>lb?la:lb;i<l;i++)
		{
			if(i<la)
				p+=(int)a[la-i-1]-'0';
			if(i<lb)
				p+=(int)b[lb-i-1]-'0';
			c[i]=p%10;
			p/=10;
		}
		for (;i>=0;i--)
		{
			if (c[i])
			{
				break;
			}
		}
		for(;i>=0;i--)
			printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}