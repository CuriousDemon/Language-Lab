// Q6)  To print the days of a week using a switch case (1->Monday, 2->Tuesday, 3->Wednesday, 4->Thursday, 5->Friday, 6->Saturday, 7->Sunday).
#include <stdio.h>
int main ()
{
    //Declare the variable here
    int num;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&num);
    //Evalute days here
    switch (num)
    {
    case 1:
        printf("\nMonday\n");
        break;
    case 2:
        printf("\nTuesday\n");
        break;
    case 3:
        printf("\nWednesday\n");
        break;
    case 4:
        printf("\nThursday\n");
        break;
    case 5:
        printf("\nFriday\n");
        break;
    case 6:
        printf("\nSaturday\n");
        break;
    case 7:
        printf("\nSunday\n");
        break;
    default:
        printf("\nWrong output\n");
        break;
    }
    
    return 0;
}