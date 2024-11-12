#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float r,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        r=sqrt(i);
        sum=sum+r;
    }
    printf("%.2f",sum);
}