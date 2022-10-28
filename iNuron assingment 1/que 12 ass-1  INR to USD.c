//ass 1 que 12
#include<stdio.h>
#include<conio.h>
int main()
{
    float usd,inr;
    usd=76.23;
    
    printf("Enter Amount in INR :");
    scanf("%f",&inr);
    usd=(inr/usd);
    printf("%f INR is %f USD :",inr,usd);

    
}