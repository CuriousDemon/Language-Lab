#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,a;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if((i+j)%2 == 0) a = 1;
            else a = 0;
            printf("%d ",a);
        }
        printf("\n");
        
    }
    
    return 0;
}