#include<stdio.h>
int main()
{
    int a;
    float uc,s;
    scanf("%d",&a);
    printf("Units Consumed: %d\n",a);
    if(a<=199)
    {
        uc=1.20;
        printf("Cost per Unit: %.2f\n",uc);
    }
    else if(a>=200 && a<400)
    {
        uc=1.40;
        printf("Cost per Unit: %.2f\n",uc);
    }
    else if(a>=400 && a<600)
    {
        uc=1.60;
        printf("Cost per Unit: %.2f\n",uc);
    }
    else if(a>=600 && a<800)
    {
        uc=1.80;
        printf("Cost per Unit: %.2f\n",uc);
    }
    else
    {
        uc=2.00;
        printf("Cost per Unit: %.2f\n",uc);
    }
    printf("Bill: %.2f\n",a*uc);
    if(a>400)
    {
         s=(a*uc)*0.15;
         printf("Surcharge: %.2f\n",s);
    }
    else
    {
        printf("Surcharge: 0.00\n");
    }
    printf("Total Amount: %.2f",a*uc+s);


}