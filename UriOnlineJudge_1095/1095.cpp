#include <bits/stdc++.h>
int main()
{
    for(int i=1; i<1000; ++i)
    {
        if(60-5*(i-1)<0) break;
        printf("I=%d J=%d\n", 1+3*(i-1), 60-5*(i-1));
    }
    return 0;
}
