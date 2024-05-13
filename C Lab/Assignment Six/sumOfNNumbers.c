//WACP to print the sum of first n numbers using recursion

#include <stdio.h>
int sum(int n)
{
    if(n == 0) return 0;
    return n + sum(n-1); 
}
int main ()
{
    //Declare varible
    int x,res;
    //take input
    printf("Enter number here : ");
    scanf("%d",&x);
    //Function call
    res = sum(x);
    printf("The factorial of %d is %d",x,res);
    return 0;
}