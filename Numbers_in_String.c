#include<stdio.h>
int main()
{
    char str[500],i;
    int j=0,c=0;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        i=str[j];
        if(i>='0' and i<='9')
        {
            c+=int(i)-48;
        }
        j++;
    }
    printf("%d",c);
}