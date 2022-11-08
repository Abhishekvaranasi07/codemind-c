#include<stdio.h>
int main()
{
    int v[2004],k[2004],i,n=0,m=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<3;i++)
    {
        if(v[i]>k[i])
        {
            n++;
        }
        else if(v[i]<k[i])
        {
            m++;
        }
    }
    printf("%d %d",n,m);
    return 0;
}