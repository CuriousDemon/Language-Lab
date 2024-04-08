#include <stdio.h>
int main ()
{
    //Declare variable here
    int n;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    for (int i = n; i >= 1; i--)
    {
        //To print space
        for (int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        
        //To print star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}