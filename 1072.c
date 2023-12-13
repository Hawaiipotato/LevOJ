#include <stdio.h>

int main()
{
    int m,n,i,j=0,k=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m],b[n],c[m+n];
    for(i=0;i<m;)
    	scanf("%d",&a[i++]);
    for(i=0;i<n;)
    	scanf("%d",&b[i++]);
    for(i=0;j<m&&k<n;)
    	if(a[j]<b[k])
    		c[i++]=a[j++];
    	else
    		c[i++]=b[k++];
    while(j<m)
    	c[i++]=a[j++];
    while(k<n)
    	c[i++]=b[k++];
    for(i=0;i<m+n;)
    	printf("%d ",c[i++]);
    return 0;
}