// Q6) WACP to calculate sum of digits of a five-digit numbers (do not use any loop construct).



#include <stdio.h>
int main ()
{
    // Declare variable here
    int digit,d1,d2,d3,d4,d5,sum;

    // Take input here
    printf("Enter digit here : ");
    scanf("%d",&digit);

    // Evalute every digit
    d5 = digit%10;
    d4 = (digit/10)%10;
    d3 = (digit/100)%10;
    d2 = (digit/1000)%10;
    d1 = (digit/10000);

    // addition of all digit
    sum = d1+d2+d3+d4+d5;

    // Display output
    printf("Sum = %d",sum);
    return 0;
}