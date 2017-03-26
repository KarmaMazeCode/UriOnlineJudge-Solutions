#include <bits/stdc++.h>
int main()
{
    int n, n1, n2=0, n3=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &n1);
        if(n1==0) n2+=1;
        else n3+=1;
    }
    if(n3>=n2) printf("N\n");
    else printf("Y\n");
    return 0;
}
