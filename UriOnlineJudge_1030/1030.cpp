#include <bits/stdc++.h>
int jos(int n, int k);
int main()
{
    int ncase;
    scanf("%d", &ncase);
    for(int i=0; i<ncase; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int resp=jos(n, k);
        printf("Case %d: %d\n", i+1, resp);
    }
    return 0;
}
int jos(int n, int k)
{
    if(n==1) return 1;
    else return (jos(n-1, k)+k-1)%n+1;
}
