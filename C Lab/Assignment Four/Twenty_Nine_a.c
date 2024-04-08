#include <stdio.h>
int main ()
{
    //Declare variable here
    int n;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern
    for (int i = 1; i <= n; i++)
    {
        //To print space
        for (int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        //To print star
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}