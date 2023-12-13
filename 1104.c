#include <stdio.h>

int main()
{
    int a,b,c,d,i,h,n;
    while(scanf("%d",&n)!=EOF)
	{
    	a=b=1;
		h=-1;
		for(i=0;i<n;i++)
    	{
    		h=-h;
			c=a+b;
    		a=b;
    		b=c;
		}
		printf("%d/%d\n",b*h,a);
	}
    return 0;
}