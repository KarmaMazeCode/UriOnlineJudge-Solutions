#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        int soma=0, a, d;
        scanf("%d %d", &a, &d);
        if(a>d)
        {
            for(int j=d+1; j<a; ++j) if(j%2!=0) soma+=j;
            printf("%d\n", soma);
        }
        else if(a<d)
        {
            for(int j=a+1; j<d; ++j) if(j%2!=0) soma+=j;
            printf("%d\n", soma);
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;
}
