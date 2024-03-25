// Q4) Input a character and print it's ASCII value.


#include <stdio.h>
int main ()
{
    // Declare variable
    char chr;
    int val;

    // Take input here
    printf("Enter the character here : ");
    scanf("%c",&chr);

    // Convert character to integer
    val = chr;

    // Display the output
    printf("The ASCII value of character %c is %d",chr,val);
    
    return 0;
}