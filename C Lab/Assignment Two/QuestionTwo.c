// Find the roots of Quadratic equation. (using if-else statement).
#include <stdio.h>
#include <math.h>
int main ()
{
    //Declare variable here
    int a,b,c,disc;
    float r1,r2;
    //Taking user input here
    printf("Coefficient of X^2 is a --> ");
    scanf("%d",&a);
    printf("Coefficient of X is b --> ");
    scanf("%d",&b);
    printf("Constant term is c --> ");
    scanf("%d",&c);
    //evaluate discriminant
    disc = (pow(b,2)-4*a*c);
    //make decision on discriminant value
    if (disc >= 0)
    {
        r1 = (-b+sqrt(disc))/(float)(2*a);
        r2 = (-b-sqrt(disc))/(float)(2*a);
        printf("Root one = %0.2f\nRoot Two = %0.2f \n",r1,r2);

    }else{
        printf("This quadratic equation has imaginary roots \n");
    }
    
    return 0;
}