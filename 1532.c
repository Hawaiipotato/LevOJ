#include<stdio.h>
#include <string.h>

int main()
{
    char a[10002];
    while (gets(a)!=NULL)
    {
        int i = 0, j;
        j = strlen(a) - 1;
        while (i <= j && a[i] == a[j])
        {
            i++;
			j--;
		}
        if (i <= j)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}