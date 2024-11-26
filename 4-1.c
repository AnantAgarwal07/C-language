#include<stdio.h>
int main()
{
    int n,i,product;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=1;i<11;i++)
    {
        product= n*i;
        printf("%d * %d = %d\n",n,i,product);
        product=0;
    }
    return 0;
}