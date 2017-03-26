#include <bits/stdc++.h>
int main()
{
    int k=7;
    for(int i=1; i<=9; ++i)
    {
        if((2*i-1)>9) break;
        for(int j=0; j<3; j++)
        {
            printf("I=%d J=%d\n", 2*i-1, k-j);
        }
        k+=2;
    }
    return 0;
}

