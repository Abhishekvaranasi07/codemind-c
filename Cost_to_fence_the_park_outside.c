#include<stdio.h>
int main()
{
    int v,k,l,m,p;
    scanf("%d %d %d %d",&v,&k,&l,&m);
    p=((v+2*l)*(k+2*l))-(v*k);
    printf("%d",p*m);
    return 0;
}