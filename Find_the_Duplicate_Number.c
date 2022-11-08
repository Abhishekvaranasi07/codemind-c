#include<stdio.h>
int main()
{
    int r,v[2004],k,j,f=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        for(j=0;j<r;j++)
        {
            if(v[k]==v[j] && k!=j)
            {
                f++;
                break;
            }
        }
        if(f!=0)
        {
            printf("%d",v[k]);
            break;
        }
    }
}