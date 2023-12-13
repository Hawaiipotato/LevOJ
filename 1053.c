#include<stdio.h>

int main()
{
    int a,m,n,t;
    while(scanf("%d",&a)!=EOF)
	{
		n=a;
		t=0;
    	do
    	{
        	m=n%10;
        	t=10*t+m;
        	n=n/10;
    	}while(n!=0);
    	if(a==t)
    		printf("yes\n");
    	else
    		printf("no\n");
	}
    return 0;
}