#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=0,b=1,c,flag =0;
    while(a<=n)
    {
        if(a==n)
        {
            flag=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
  
}