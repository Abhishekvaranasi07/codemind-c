#include<stdio.h>
int main()
{
    char str[2004],i;
    int j=0,c=0;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        i=str[j];
        if(i>='0' and i<='9')
        {
            c++;
        }
        j++;
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",c);
    }
}