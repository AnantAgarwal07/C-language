#include<stdio.h>
int main()
{
    int income,tax;
    printf("Enter your income");
    scanf("%d",&income);
    if(income>1000000)
    {
        tax=0.3*income;
        printf("The tax you have to pay is %d",tax);
    }
    else if (income<1000000 && income >=500000)
    {
        tax=0.2*income;
        printf("The tax you have to pay is %d",tax);
    }
    else if (income<500000 && income>=250000)
    {
        tax=0.05*income;
        printf("The tax you have to pay is %d",tax);
    }
    else 
    {
        tax=0;
        printf("The tax you have to pay is %d",tax);
    }
    return 0;
}