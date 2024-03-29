// Q4) To check whether a number is palindrome or not.
#include <stdio.h>
int main ()
{
    //Declare variable here
    int num,n,rem,sum = 0;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&num);
    //Check palindrome number here
    n = num;
    while (n>0)
    {
        rem = n%10;
        sum = sum * 10 + rem; 
        n /= 10;
    }
    if (num == sum)
    {
        printf("\nIt is a palindrome number \n");
    }else{
        printf("\nIt is not a palindrome number \n");
    }
    return 0;
}