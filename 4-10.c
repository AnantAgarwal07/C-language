#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n<=1)
    printf("The number %d is not a prime number",n);
    else 
    {
        for (i=2;i<n/2;i++)
        {
            if (n%i!=0)
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        printf("The number %d is a prime number",n);
        else
        printf("The number %d is not a prime number",n);
    }
    return 0;
}