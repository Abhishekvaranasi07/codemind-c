#include<stdio.h>
int main()
{
    int k,r=0;
    char v[2004];
    scanf("%s",v);
    for(k=0;v[k]!=NULL;k++)
    {
        if((v[k]>='0') && (v[k]<='9'))
        {
            r+=(v[k]-'0');
        }
    }
    printf("%d",r);
    return 0;
}