#include <bits/stdc++.h>
int main()
{
    int n, n2;
    while(scanf("%d %d", &n, &n2)!=EOF)
    {
        int soma=0;
        if(n==0||n2==0) break;
        else if(n<0||n2==0) break;

        if(n>=n2)
        {
            for(int i=n2; i<=n; ++i)
            {
                soma+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
        else
        {
            for(int i=n; i<=n2; ++i)
            {
                soma+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
    }
    return 0;
}
