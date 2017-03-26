#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, n2, n3;
    while(scanf("%lld %lld", &n, &n2) !=EOF)
    {
        n3=n^n2;
        printf("%lld\n", n3);
    }
    return 0;
}
