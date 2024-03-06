// Q3) Input temperature in celsius and convert it to fahrenheit and vice versa.


#include <stdio.h>
int main ()
{
    // Declare the variable here
    float cel,fahr;
    int flag;

    // Take input here
    printf("\t\t<---------Temparature converter--------->\n");
    printf("-->Type 0 (Celcius to fahrenheit)\n");
    printf("-->Type 1 (fahrenheit to celcius)\n");
    printf("-->");
    scanf("%d",&flag);

    // Solve teh problem here
    if(flag)
    {
        // If flag = 1
        printf("\t\t<---------Fahrenheit to Celcius temparature converter--------->\n");
        printf("Enter Fahrenheit value : ");
        scanf("%f",&fahr);
        cel = (5 *(fahr - 32))/9.0;
        // Display output
        printf("%f Celcius",cel);
    }else{
        // If flag = 0
        printf("\t\t<---------Celcius to Fahrenheit temparature converter--------->\n");
        printf("Enter Celcius value : ");
        scanf("%f",&cel);
        fahr = ((9 *cel)/5.0) + 32;
        // Display output
        printf("%f Fahrenheit",fahr);
    }

    return 0;
}