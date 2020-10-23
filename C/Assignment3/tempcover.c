//converts temperatures between Fahrenheit, Celsius, and Kelvin.

#include<stdio.h>

#include<stdlib.h>

//Main program
int main()

{
    //Initialize and set variables 
    char temp[10];
    int len,i;
    char temp1;
    float val;
    float kelvin,celcius,fahrenheit;
    //Ask the user to input the temperature.
    printf("Please enter a temperature: ");
    //Read and store temp
    gets(temp);
    //Find length of string
    len= strlen(temp);
    char temp2[len-1];
    //Store in temp1
    temp1=temp[len-1];
    //Execute for loop 
    for(i=0;i<len-1;i++)
    {
        //Store value 
        temp2[i]=temp[i];
    }
    temp2[i]='\0';
    //Convert string into float
    val=(atof(temp2));
    //Check  if temp1 equals to c,f or k
    if(temp1=='c' || temp1=='f' || temp1=='k')
    {
        printf("%.2f %c Convert to: ",val,temp1);
        //If temp1 is c
        if(temp1=='c')

        {
            //Calculate fahrenheit and kelvin
            fahrenheit=(val*1.8)+32;
            kelvin=val+273.15;
            //Print fahrenheit and kelvin
            printf("\n%.2f F",fahrenheit);
            printf("\n%.2f K",kelvin);
        }
        //If temp1 is f
        else if(temp1=='f')
        {
            //Calculate celcius and kelvin
            celcius=((val-32)/1.8);
            kelvin=celcius+273.15;
            //Print celcius and kelvin
            printf("\n%.2f C",celcius);
            printf("\n%.2f K",kelvin);
        }
        //If temp1 is k
        else if(temp1=='k')
        {
            //Calculate celcius and fahrenheit
            celcius=val-273.15;
            fahrenheit=(celcius*1.8)+32;
            //Print celcius and fahrenheit
            printf("\n%.2f C",celcius);
            printf("\n%.2f F",fahrenheit);
        }
    }

    //If no cases work...
    else

    {
        //Print statement
        printf("\nInvalid temperature scale");
    }
    return 0;
}