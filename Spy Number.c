#include<stdio.h>
int main()
{
    int a,r,sum=0,p=1;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        sum=sum+r;
        p=p*r;
        a=a/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}