// Check whether a number is odd or even. (using simple if statement).

#include <stdio.h>
int main ()
{
    // Varible declare here
    int num;
    //Take user input here
    printf("Enter a number here : ");
    scanf("%d",&num);
    //Check whether the number is even or odd
    if(num%2 == 0)
    {
        printf("Even number \n");
        return 0;
    }
    printf("Odd number \n");
    return 0;
}