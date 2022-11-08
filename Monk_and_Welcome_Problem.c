#include<stdio.h>
int main()
    {
        int n,v[2004],k[2004],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&k[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",v[i]+k[i]);
        }
        return 0;
    }