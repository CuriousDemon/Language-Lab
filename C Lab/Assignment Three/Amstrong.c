// Q3) To find whether a number is Armstrong or not.
#include <stdio.h>
#include <math.h>
int main ()
{
    //Declare variable here
    int num,n,po = 0,rem;
    float sum = 0;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&num);
    //Check amstrong number here
    n = num;
    while (n>0)
    {
        n /= 10;
        po++;
    }
    n = num;
    while (n>0)
    {
        rem = n%10;
        sum += pow(rem,po);
        n /= 10;
    }
    if (num == sum)
    {
        printf("\nIt is a Amstrong number \n");
    }else{
        printf("\nIt is not a Amstrong number \n");
    }
    
    
    return 0;
}