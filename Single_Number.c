#include<stdio.h>
int main()
{
    int n,v[1000],k,j,l;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<n;k++)
    {
        l=0;
        for(j=0;j<n;j++)
        {
            if(v[k]==v[j])
            {
                l++;
            }
        }
        if(l==1)
        {
            printf("%d ",v[k]);
        }
    }
    return 0;
}