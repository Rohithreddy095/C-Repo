#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n\n",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);

}