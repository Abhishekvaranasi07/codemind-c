#include<stdio.h>
void dup(int *a,int n)
{
    int k,j;
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            if(a[k]==a[j] && k!=j)
            {
                a[k]=-1;
            }
        }
    }
}
void sort(int *v,int r)
{
    int i,j,t;
    for(i=0;i<r-1;i++)
    {
    	for(j=0;j<r-1;j++)
    	{
        	if(v[j]>v[j+1])
        	{
            	t=v[j+1];
            	v[j+1]=v[j];
            	v[j]=t;
        	}
    	}
    }
}
int count(int *vk,int k,int n)
{
    int v,c=0;
    for(v=0;v<n;v++)
    {
        if(k==vk[v])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,a[2004],k,v[2004],j=0,vk[2004],r=0,res,c;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
        vk[k]=a[k];
    }
    dup(a,n);
    k=0;
    for(j=0;j<n;j++)
    {
        if(a[j]!=-1)
        {
            v[k]=a[j];
            k++;
        }
    }
    sort(v,k);
    res=v[0];
    j=0;
    for(r=0;r<k;r++)
    {
        c=count(vk,v[r],n);
        if(c>j)
        {
            j=c;
            res=v[r];
        }
    }
    printf("%d",res);
}