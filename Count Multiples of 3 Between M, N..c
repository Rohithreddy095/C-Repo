#include<stdio.h>
int main()
{
    int a,b,count=0,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            count=count+1;
        }
        else
        {
            continue;
        }
    }
    printf("%d",count);
}