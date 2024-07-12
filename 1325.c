#include <stdio.h>
#include <stdlib.h>
#define N 100001
//区间合并
int main()
{
    int n,a,b,flag=0,i,j,c[N] = {0}, begin = 0, end = 0;
 
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d%d",&a,&b);
            for(j = a; j < b; j++)
                c[j] = 1;
        }
 
        for(i = 0; i < N; i++)
        {
            if(c[i] == 1 && flag == 0)
            {
                begin = i;
                flag = 1;
            }
            if(c[i] == 0 && flag == 1)
            {
                end = i;
                flag = 0;
            }
            if(end != 0)
            {
                printf("%d %d\n", begin, end);
 
                begin = 0;
                end = 0;
            }
        }
        printf("\n");
        for(i = 0; i < N; i++)
            c[i] = 0;
    }
    return 0;
}