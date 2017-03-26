#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    double n=0, n2=0, c=11;
    while(c--)
    {
        for(int i=1; i<=3; ++i)
        {
            n2=n+i;
            if(n==0||n==1||n==2) printf("I=%.0lf J=%.0lf\n", n, n2);
            else printf("I=%.1lf J=%.1lf\n", n, n2);
        }
        n+=0.2;
    }
    return 0;
}
