#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rep, rep2;
    char C, C2;
    int v[3]={0};
    scanf("%d", &rep);
    while(rep--)
    {
        for(int i=0; i<scanf("%d", &rep2); ++i)
        {
            scanf("%c %c", &C, &C2);
            if(C=='R') v[0]++;
            else if(C=='G') v[1]++;
            else if(C=='B') v[2]++;
        }
        printf("%d %d %d\n", v[0], v[1], v[2]);
    }
    return 0;
}
