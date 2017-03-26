#include <bits/stdc++.h>
int main()
{
    int n, n2;
    while(scanf("%d %d", &n, &n2) != EOF)
    {
        if(n==n2) break;
        else if(n>n2) printf("Decrescente\n");
        else if(n<n2) printf("Crescente\n");
    }
    return 0;
}
