#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int sum=0;
    int sum1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum1=sum1+a[i];
        }
    }
    int c=sum1-sum;
    int d=sum-sum1;
    if(sum1>sum)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }

    
}
