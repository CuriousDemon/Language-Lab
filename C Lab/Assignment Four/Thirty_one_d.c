#include <stdio.h>
int main ()
{
    //declare variable here
    int n,a,mid;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print number here
    a = 1;
    mid = (2*n-1)/2+1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i <= mid)
        {
        //To print number
        for (int j = 1; j <= 2*i-1; j++)
        {
        printf("%d",a);
        }
        //To print space
        for (int s = 1; s <= 2*n-1-a; s++)
        {
            printf(" ");
        }
        //To print last space
        for (int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        //To print last number
         for (int j = 1; j <= 2*i-1; j++)
        {
        printf("%d",a);
        }
        }else{
        //To print number
        for (int j = 1; j <= 2*((2*n-1)-i)+1; j++)
        {
        printf("%d",a);
        }
        //To print space
        for (int s = 1; s <= 2*n-1-a; s++)
        {
            printf(" ");
        }
        //To print last space
        for (int s = 1; s <= i-mid; s++)
        {
            printf(" ");
        }
        //To print last number
        for (int j = 1; j <= 2*((2*n-1)-i)+1; j++)
        {
        printf("%d",a);
        }
        }
        if(i<mid) a += 2;
        else a -= 2;
        printf("\n");
        
    }
    
    return 0;
}