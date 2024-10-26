#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int loss=a-b;
    float x=(loss*100.0)/a;
    printf("%.2f",x);
}