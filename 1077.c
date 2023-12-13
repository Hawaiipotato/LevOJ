#include <stdio.h>

int main()
{
    int i,h,n;
    float a,b,c,s,t;
    while(scanf("%d",&n)!=EOF)
	{
    	a=b=h=1;
    	s=t=0;
		for(i=0;i<n;i++)
    	{
    		c=a+b;
    		a=b;
    		b=c;
    		t=b/a*h;
    		h=-h;
    		s+=t;
		}
		printf("%.4f\n",s);
	}
    return 0;
}