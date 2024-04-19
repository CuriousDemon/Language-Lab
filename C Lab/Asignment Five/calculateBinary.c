// 3. WACP using your function to calculate the binary equivalent of a decimal number.

#include <stdio.h>

//Prototype declaration
long int calBin(int num);

int main ()
{
    //Declare varibles
    int num;
    //take input
    printf("Enter number : ");
    scanf("%d",&num);
    //Call function
    printf("The binary number of %d is %ld",num,calBin(num));
    
    return 0;
}

//Define function
long int calBin(int num)
{
    long int res = 0;
    int rem,pow = 1;
    while (num > 0)
    {
        rem = num % 2;
        res += (long int)rem*pow;
        pow *= 10;
        num /= 2;
    }
    return res;

}