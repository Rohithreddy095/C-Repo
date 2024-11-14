#include<stdio.h>
int main()
{
    int a,b,c=1,g;
    scanf("%d %d",&a,&b);
    while(c <= a && c <= b)
    {
        if(a%c == 0 && b%c == 0)
        {
            g=c;
        }
        c++;
    }
    printf("%d",g);
}