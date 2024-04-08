#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,num,midrow,midcol,col;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    col = 0;
    midcol = (2*n-1)/2+1;
    for (int i = 1; i <= 2*n-1;i++)
    {
        if(i <= midcol) col++;
        else col--;
        num = 0;
        midrow  = (2*col-1)/2+1;
        for (int j = 1; j <= 2*col-1; j++)
        {
            if (j <= midrow) num++;
            else num--;
            printf("%d",num);
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}