#include<stdio.h>
int main()
{
    char name[104];
    int i;
    scanf("%s",name);
    for(i=0;name[i] != '\0' ; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]=name[i]+32;
            printf("%c",name[i]);
        }
        else
        {
            printf("%c",name[i]);
        }
    }
}