#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=1;i<n;i++)
    {
        if(a[i]%2!=0 && i%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}