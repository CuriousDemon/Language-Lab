// 4. WACP to find out GCD and LCM using functions.

#include <stdio.h>

int GCD(int n1, int n2);
int LCM(int n1, int n2);

int main()
{
    // Declare varibles
    int num1, num2;
    // Take input
    printf("Enter number here : ");
    scanf("%d %d", &num1, &num2);
    // call function
    printf("GCD of %d and %d is %d\n", num1, num2, GCD(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, LCM(num1, num2));

    return 0;
}

int GCD(int n1, int n2)
{
    if(n1!=0)
        return GCD(n2%n1,n1);
    else 
        return n2;
}
int LCM(int n1, int n2)
{
    return (n1*n2)/GCD(n1,n2);
}