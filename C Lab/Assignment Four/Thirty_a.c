#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,inc,mid;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern
    inc = 0;
    for (int i = 1; i <= n; i++)
    {
        //To print space
        for (int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        //To print number
        mid = 2*i-1;
        for (int k = 1; k <= 2*i-1; k++)
        {
            if(k <= (mid/2+1)) inc++;
            else inc--;
            
            printf("%d",inc);
        }
        printf("\n");
        
    }
    
    return 0;
}