#include<stdio.h>
int main()
{
    int n,v[2004],k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    k=n/2;
    for(i=n-1;i>=k;i--)
    {
        printf("%d ",v[i]);
    }
    for(i=0;i<k;i++)
    {
         printf("%d ",v[i]);
    }
    return 0;
}