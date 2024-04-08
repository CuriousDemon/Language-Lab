#include <stdio.h>
int main ()
{
    //Declare variable here
    int n;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    for (int i = 1; i <= n; i++)
    {
        //To print space
        for (int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        //To print star
        for (int k = i; k >= 1; k--)
        {
            printf("%d",k);
        }
        for (int k = 2; k <= i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
        
    }
    
    return 0;
}