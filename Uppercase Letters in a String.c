#include<stdio.h>
int main()
{
    char name[104];
    int i;
    int c=0;
    scanf("%[^\n]s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}