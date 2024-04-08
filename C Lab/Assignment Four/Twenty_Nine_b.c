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
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}