// Accept any marks from user and find out whether the no is within 0-100 or not and then print the corresponding grade
#include <stdio.h>
int main ()
{
    //Delclare variable here
    int marks = 0;
    while (marks != -1)
    {
    //Take input from user
    printf("\nFor exit type (-1)\n");
    printf("Enter marks here : ");
    scanf("%d",&marks);
    //Evaluate grade
    switch (marks)
    {
    case 90 ... 100:
        printf("O grade \n");
        break;
    case 80 ... 89:
        printf("E grade \n");
        break;
    case 70 ... 79:
        printf("A grade \n");
        break;
    case 60 ... 69:
        printf("B grade \n");
        break;
    case 50 ... 59:
        printf("C grade \n");
        break;
    case 40 ... 49:
        printf("D grade \n");
        break;
    case 0 ... 39:
        printf("Fail \n");
        break;
    case -1:
        printf("Exit......... \n");
        break;
    default:
        printf("Wrong marks\n");
        break;
    }

    }
    return 0;
}