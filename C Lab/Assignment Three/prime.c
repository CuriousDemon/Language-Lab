// Q5) To find a number is prime or not.
#include <stdio.h>
#include <math.h>
int main ()
{
    //Declare variable here
    int flag = 0,num;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&num);
    //Check prime numbers
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag)
    {
        printf("\nThis is not a prime number\n");
    }else{
        printf("\nThis is a prime number\n");
    }
    
    return 0;
}