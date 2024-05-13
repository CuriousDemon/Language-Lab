//WACP to print the elements of an array using recursion
#include <stdio.h>
int print(int arr[],int n)
{
if(n == 0) return 0;
print(arr,n-1);
printf("%d, ",arr[n-1]);
return 0;
}
int main ()
{
    //Declare varible
    int x;
    int box[100];
    //take input
    printf("How many number you wnat to add : ");
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
    scanf("%d",&box[i]);
    }
    
    //Function call
    print(box,x);
    
    return 0;
}