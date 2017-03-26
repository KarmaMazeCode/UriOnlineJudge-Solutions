#include <bits/stdc++.h>
int main()
{
    int L, R;
    while(scanf("%d %d", &L, &R)!=EOF)
    {
        if(L==0&&R==0) break;

        printf("%d\n", L+R);
    }
    return 0;
}
