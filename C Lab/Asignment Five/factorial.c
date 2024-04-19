// Q1) Write a program in C to find out the factorial value of n. using function.

#include <stdio.h>
//Declare prototype
long int factorial(int n);

int main()
{
    //Declare varible
    int num;
    //take input here
    printf("Enter number here : ");
    scanf("%d",&num);
    //Call function
    printf("The factorial of %d is %ld",num,factorial(num));

    return 0;
}

//Define function
long int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}