#include <bits/stdc++.h>
int main()
{
    int n, n1, n2;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &n1);
        for(int i=0; i<n1; i++)
        {
            scanf("%d", n2);
            if(n2==1) printf("Rolien\n");
            else if(n2==2) printf("Naej\n");
            else if(n2==3) printf("Elehcim\n");
            else if(n2==4) printf("Odranoel\n");
        }
    }
    return 0;
}
