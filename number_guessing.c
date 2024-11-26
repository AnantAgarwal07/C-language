#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL)); // To input a random seed for random number generator
    int n=rand()%100,input;
    printf("This aim of this game is for you to guess a random number between 1 & 100. \nEnter a number between 1 & 100 (including 1 & 100) for your guess: ");
    scanf("%d",&input);    
    while(input!=n)
    {
        if(input>n)
        {
            printf("Lower\n");
        }
        else
        {
            printf("Higher\n");
        }
        printf("Enter your guess: ");
        scanf("%d",&input);
    }
    printf("Correct");
    return 0;
}
