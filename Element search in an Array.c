#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int es;
    scanf("%d",&es);
    for(i=0;i<n;i++)
    {
        if(a[i]==es)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}