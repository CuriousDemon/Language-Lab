// Any year is entered through keyboard. WACP to determine whether the year is a leap year or not.
#include <stdio.h>
int main ()
{
    //Declare variable here 
    int year;
    //Take user input here
    printf("Enter year here : ");
    scanf("%d",&year);
    //check leap year or not
    if (year%100 == 0 && year%400 == 0)
    {
        printf("Leap year\n");
    }else if(year%100 != 0 && year%4 == 0){
        printf("Leap year\n");
    }else{
        printf("Not Leap year\n");
    }
    
    return 0;
}
