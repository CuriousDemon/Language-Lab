// Q2) To print Fibonacci series.
#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,fibo = 0,t1 = 0,t2 = 1;
    //Take input here
    printf("How many numbers of fibonacci series you want to print ? :");
    scanf("%d",&n);
    //Evalute fibonacci serirs
    printf("\nFibonacci series .........\n");
    fibo = t1 + t2;
    printf(" %d ",t1);
    printf(" %d ",t2);
    printf(" %d ",fibo);
    for (int i = 4; i <= n; i++)
    {
        t1 = t2;
        t2 = fibo;
        fibo = t1 + t2;
    //Display output
    printf(" %d ",fibo);
    }
    
    return 0;
}