#include<stdio.h>
int main()
{
    int n,v[2004],k,j=0,s=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d ",&v[k]);
        v[j]=v[k];
        j++;
    }
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            if(v[k]>v[j])
            {
                s++;
            }
        }
        printf("%d ",s);
        s=0;
    }
}