//WACP to find factorial of a given number using recurrsion

#include <stdio.h>
long int fac(int n)
{
    if (n == 0) return 1;
    return n * fac(n-1);
}
int main ()
{
    //Declare varible
    int x;
    long int res;
    //take input
    printf("Enter number here : ");
    scanf("%d",&x);
    //Function call
    res = fac(x);
    printf("The factorial of %d is %ld",x,res);
    return 0;
}