#include<stdio.h>
int main()
{
    char name[104];
    int i;
    int c=0;
    scanf("%[^\n]s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o'|| name[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
}