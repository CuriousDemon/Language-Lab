// 2. WACP to calculate the power of a number x^r, using your function.

#include <stdio.h>

int calPow(int base,int r);

int main ()
{
    //Declare function
    int x,r;
    //take input
    printf("Enter the base value : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&r);
    //Call function
    printf("x^r of %d and %d is %d",x,r,calPow(x,r));
    
    return 0;
}

int calPow(int base,int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res *= base;
    }
    
    return res;

}