#include<stdio.h>
int main()
{
    int n,j,m=0;
    scanf("%d",&n);
    for(j=0;j<=(n/2);j++)
        {
            if(j*j==n)
            {
                m++;
            }
        }
        if(m==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    return 0;
}