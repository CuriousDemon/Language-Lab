// Q2) Solve this equation by user input: x=a+b-c*d/e


#include <stdio.h>
int main ()
{
    // Declare the variable here
    int a,b,c,d,e;
    float x;

    // Taking input here
    printf("Enter four numbers here : \n");
    printf("--> ");
    scanf("%d",&a);
    printf("--> ");
    scanf("%d",&b);
    printf("--> ");
    scanf("%d",&c);
    printf("--> ");
    scanf("%d",&d);
    printf("--> ");
    scanf("%d",&e);

    // Solve the eqution here
    x = (a+b-c*d/(float)e);

    // Display the output
    printf("x = %0.4f",x);
    
    return 0;
}