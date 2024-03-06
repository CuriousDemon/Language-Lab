// Q5) Swapping of two numbers (Using Third variable, without using third variable, Without using + / - operator).



#include <stdio.h>
int main ()
{
    // Declare variable here
    int a,b,temp;

    // Take input here
    printf("\t\t<---------Swapping of two numbers--------->\n");
    printf("a -->");
    scanf("%d",&a);
    printf("b -->");
    scanf("%d",&b);

    // Swapping of two numbers with third vriable
    /* temp = b;
    b = a;
    a = temp; */

    // Swapping of two numbers without third vriable 
    /* a = (a+b);
    b = a-b;
    a = a-b; */

    // Swapping of two numbers without using (+ / -)
    a = a^b;
    b = a^b;
    a = a^b;


    // Dispaly output
    printf("a = %d & b = %d",a,b);

    return 0;
}

