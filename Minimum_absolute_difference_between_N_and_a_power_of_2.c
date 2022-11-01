#include<stdio.h>
#include<math.h>
int main()
{
    int n,v,k,r,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=pow(2,i);
        if(r>=n)
        {
            break;
        }
    }
    v=pow(2,i-1);
    k=pow(2,i);
    if(n==r)
    {
        printf("%d",r-n);
    }
    else if(k-n>n-v)
    {
        printf("%d",n-v);
    }
    else
    {
        printf("%d",k-n);
    }
}