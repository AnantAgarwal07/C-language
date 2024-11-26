#include<stdio.h>
int main()
{
    int sum=0,i;
    for (i=1;i<11;i++)
    {
        sum = sum + 8*i;
    }
    printf("%d",sum);
    return 0;
}