#include<stdio.h>
int main()
{
    char str[2003],i;
    int j=0,r=0;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        i=str[j];
        if(r<int(i))
        {
            r=int(i);
        }
        j++;
    }
    printf("%c",char(r));
}