#include<stdio.h>
int main()
{
    int a,r,sum=0;
    scanf("%d",&a);
    sum=a%10;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
    }
    sum=sum+r;
    printf("%d",sum);
}