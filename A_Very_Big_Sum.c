#include<stdio.h>
int main()
{
    int v[500],n,k;
    long long int s=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<n;k++)
    {
        s+=v[k];
    }
    printf("%lld",s);
    return 0;
}