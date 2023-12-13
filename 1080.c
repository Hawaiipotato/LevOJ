#include <stdio.h>

int main()
{
    int i,m,n,k;
    for (i = 100; i < 1000; i++)
    {
        m = i / 100;
        n = (i - m * 100) / 10;
        k = i % 10;
        if (i == m * m * m + n * n * n + k * k * k)
            printf("%d\n", i);
    }
    return 0;
}