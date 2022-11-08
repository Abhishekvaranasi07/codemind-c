#include<stdio.h>
int main()
{
    char v[2004];
    int k,r,l;
    fgets(v,2004,stdin);
    scanf("%d %d",&k,&r);
    for(l=k;l<=r;l++)
    {
        printf("%c",v[l]);
    }
}