#include<stdio.h>
#include<string.h>
int rep(char *st,char i)
{
    int c=0,j=0;
    while(st[j]!=NULL)
    {
        if(i==st[j])
        {
            c++;
        }
        j++;
    }
    if(c==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char st[100],str[100];
    int j=0,s=-1;
    fgets(st,sizeof(st),stdin);
    while(st[j]!=NULL)
    {
        if(rep(st,st[j]))
        {
            s=j;
            break;
        }
        j++;
    }
    printf("%d",s);
}