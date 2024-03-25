// Q1)  Find out the sum and average of 4 given numbers.

#include <stdio.h>

int main()
{
    // Declare all variables
    int num1,num2,num3,num4,sum;
    float avg;

    // Taking input here
    printf("Enter four numbers here : \n");
    printf("--> ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    // printf("--> ");
    // scanf("%d",&num2);
    // printf("--> ");
    // scanf("%d",&num3);
    // printf("--> ");
    // scanf("%d",&num4);

    // Calculate sum of four numbers
    sum = num1+num2+num3+num4;

    // Calculate average of four numbers
    avg = sum/4.0;

    // Display output here
    printf("Sum of %d, %d, %d & %d is %d\n",num1,num2,num3,num4,sum);
    printf("Average of %d, %d, %d & %d is %0.3f\n",num1,num2,num3,num4,avg);


    return 0;
}