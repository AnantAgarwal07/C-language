#include<stdio.h>
int main()
{
    int i,sum;
    for (i=1;i<11;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    sum=0,i=1;
    do
    {
        sum = sum+i;
        i+=1;
    }
    while(i<11);
    printf("%d",sum);
    return 0;
}