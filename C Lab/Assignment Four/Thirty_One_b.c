#include <stdio.h>
int main ()
{
    //Declare variable here
    int in,neu = 1,den1 = 1,den2 = 1,res;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&in);
    //Print pattern
    for (int i = 0; i < in; i++)
    {
        //To print space
        for (int s = 0; s < in-i-1; s++)
        {
            printf(" ");
        }
        //To print number
     

        for (int k = 0; k <= i; k++)
        {
            if(k == 0) printf("1 "); 
            else if (k == i) printf("1 ");
            else if(k>0 && k<i)
            {
                neu = 1;
                den1 = 1;
                den2 = 1;
                for (int n = 1; n <= i; n++)
                {
                    neu *= n;
                }
                for (int d = 1; d <= i-k; d++)
                {
                    den1 *= d;
                }
                for (int c = 1; c <= k; c++)
                {
                    den2 *= c;
                }

                res = (neu/(den1*den2));
                printf("%d ",res);   
                
            }
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}