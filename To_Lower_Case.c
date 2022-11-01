#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[500],str1[500];
    int j=0;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        str1[j]=tolower(str[j]);
        j++;
    }
    str1[j]=NULL;
    printf("%s",str1);
}