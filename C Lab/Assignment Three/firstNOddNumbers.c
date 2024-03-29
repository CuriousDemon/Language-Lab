// Q1) To calculate the sum of first n odd numbers.

#include <stdio.h>
int main ()
{
    //Declre variable here
    int n,sum = 0,flag = 0;
    //Take input here
    printf("How many odd number's sum you want ? :");
    scanf("%d",&n);
    //Evalute odd numbers and sum
    for (int i = 0; i <= __INT_MAX__; i++)
    {
        if (i%2 != 0)
        {
            sum += i;
            flag++;
        }
        if (!(flag ^ n))
        {
            break;
        }
        
        
    }
    //Display Output
    printf("The sum of first %d numbers is %d",n,sum);
    
    return 0;
}