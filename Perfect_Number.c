#include<stdio.h>
int main()
{
    int v,k,r=0;
    scanf("%d",&v);
    for(k=1;k<v;k++)
    {
        if(v%k==0)
        {
            r=r+k;
        }
    }
    if(r==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}