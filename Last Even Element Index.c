#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=i;
        }
        else
        {
            continue;
        }
    }
    printf("%d",sum);
}