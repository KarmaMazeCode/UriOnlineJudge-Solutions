#include <bits/stdc++.h>
int main()
{
    double n, an[3]={0};
    scanf("%lf", &n);
    for(int i=0; i<n; ++i)
    {
        double q;
        char a;
        scanf("%lf %c", &q, &a);
        if(a=='C') an[0]+=q;
        else if(a=='R') an[1]+=q;
        else if(a=='S') an[2]+=q;
    }
    printf("Total: %.0lf cobaias\n", an[0]+an[1]+an[2]);
    printf("Total de coelhos: %.0lf\n", an[0]);
    printf("Total de ratos: %.0lf\n", an[1]);
    printf("Total de sapos: %.0lf\n", an[2]);
    printf("Percentual de coelhos: %.2lf %%\n", (an[0]*100)/(an[0]+an[1]+an[2]));
    printf("Percentual de ratos: %.2lf %%\n", (an[1]*100)/(an[0]+an[1]+an[2]));
    printf("Percentual de sapos: %.2lf %%\n", (an[2]*100)/(an[0]+an[1]+an[2]));
    return 0;
}
