#include <stdio.h>

void move(int);

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
        move(n);
	return 0;
}

void move(int n)
{
    if (n == 4)
    {
        printf("4,5-->9,10\n");
        printf("8,9-->4,5\n");
        printf("2,3-->8,9\n");
        printf("7,8-->2,3\n");
        printf("1,2-->7,8\n");
    }
    else
    {
        printf("%d,%d-->%d,%d\n",n,n+1,2*n+1,2*n+2);
        printf("%d,%d-->%d,%d\n",2*n-1,2*n,n,n+1);
        move(n - 1);
    }
}