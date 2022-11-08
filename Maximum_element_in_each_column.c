#include<stdio.h>
int main()
{
    int n,a[10][10],m,i,j,max;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=0;j<m;j++)
        {
            if(max<a[j][i])
            {
                max=a[j][i];
            }
        }
        printf("%d
",max);
    }
}