#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    while (i>0)
    {
        fact = fact*i;
        i--;
    }
    printf("Factorial of %d = %d",n,fact);
    return 0;
}