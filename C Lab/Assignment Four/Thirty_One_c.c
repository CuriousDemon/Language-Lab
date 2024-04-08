#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,mid;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    mid = (2*n-1)/2+1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i <= mid)
        {
        //To print space
        for (int s = 1; s < i; s++)
        {
            printf(" ");
        }
        
        //To print star
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        }if(i>mid)
        {
        //To print space
        for (int s = 1; s <= ((2*n-1)-i); s++)
        {
            printf(" ");
        }
        //To print star
        for (int k = 1; k <= (i-mid+1); k++)
        {
            printf("*");
        }
        }
        printf("\n");
        
    }
    
    return 0;
}