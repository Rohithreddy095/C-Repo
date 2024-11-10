#include<stdio.h>
int main()
{
    int a,p,sum=0;
    scanf("%d",&a);
    int r=a*a;
    while(r!=0)
    {
        p=r%10;
        sum=sum+p;
        r=r/10;
    }
    if(a==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}