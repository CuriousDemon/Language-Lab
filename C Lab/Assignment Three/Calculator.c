// Q7) To create a simple calculator using switch case (Addition, Subtraction, Multiplication, and Division).
#include <stdio.h>
int main ()
{
    //Declare the variable
    int n1,n2;
    char op;
    //Take input here
    printf("Enter number here : ");
    scanf("%d %d",&n1,&n2); 
    fflush(stdin);
    printf("Enter operator here : ");
    scanf("%c",&op); 
    //Evaluate calculator
    switch (op)
    {
    case '+':
        printf("\n%d + %d = %d\n",n1,n2,n1+n2);
        break;
    case '-':
        printf("\n%d - %d = %d\n",n1,n2,n1-n2);
        break;
    case '*':
        printf("\n%d * %d = %d\n",n1,n2,n1*n2);
        break;
    case '/':
        printf("\n%d / %d = %d\n",n1,n2,n1/n2);
        break;
    
    default:
        printf("\nWrong Input\n");
        break;
    }
    return 0;
}