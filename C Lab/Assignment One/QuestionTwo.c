// Q2) Solve this equation by user input: x=a+b-c*d/e


#include <stdio.h>
int main ()
{
    // Declare the variable here
    int a,b,c,d,e;
    float x;

    // Taking input here
    printf("Enter five numbers here : \n");
    printf("a --> ");
    scanf("%d",&a);
    printf("b --> ");
    scanf("%d",&b);
    printf("c --> ");
    scanf("%d",&c);
    printf("d --> ");
    scanf("%d",&d);
    printf("e --> ");
    scanf("%d",&e);

    // Solve the eqution here
    x = (a+b-c*d/(float)e);

    // Display the output
    printf("Equation is x = a+b-c*d/e\n");
    printf("x = %0.4f",x);
    
    return 0;
}