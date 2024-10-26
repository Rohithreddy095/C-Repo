#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int profit=b-a;
    float h=(profit*100.0)/a;
    printf("%.2f",h);

}