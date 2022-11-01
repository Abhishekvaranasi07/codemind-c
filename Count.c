#include<stdio.h>
int main()
{
    int n,v[2004],i,k1=0,k2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            k1++;
        }
        else
        {
            k2++;
        }
    }
    printf("%d %d",k1,k2);
    return 0;
}