// Find greatest of three numbers. (using conditional statement ).
#include <stdio.h>
int main ()
{
    //Declare variable here
    int n1,n2,n3;
    //Take user input here
    printf("Enter three numbers here : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    //Check max number
    if(n1>n2 && n1>n3)
    {
        printf("Greatest number %d",n1);
    }else if(n2>n3 && n2>n1){
        printf("Greatest number %d",n2);
    }else{
        printf("Greatest number %d",n3);
    }
    return 0;
}