#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int j=0;
    fgets(str,sizeof(str),stdin);
    for(j=strlen(str)-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
}