#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}