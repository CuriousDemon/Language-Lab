#include <stdio.h>
int main ()
{
    //Declare variable here
    int n,t1 = 0,t2 = 1,next;
    //Take input here
    printf("Enter number here : ");
    scanf("%d",&n);
    //Print pattern here
    next = t1 +t2;
    for (int i = 1; i <= n; i++)
    {
        if(i == 1) printf("%d",t1);
        if(i == 2) printf("%d %d",t2,next);
        if(i >= 3){
        for (int j = 1; j <= i; j++)
        {
            t1 = t2;
            t2 = next;
            next = t1 + t2;
            printf("%d ",next);
        }
        }
        printf("\n");
        
    }
    
    return 0;
}