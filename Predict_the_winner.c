#include<stdio.h>
#include<math.h>
int main()
{
    int v[2004],k,r,n,a=0,b=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
        if(k%2==0)
        {
            a+=v[k];
        }
        else
        {
            b+=v[k];
        }
    }
    if(abs(a-b)%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}