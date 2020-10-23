//Converts a time provided in hours, minutes, and seconds to seconds

#include <stdio.h>
//Main program 
int main() 
{
    //Set hour, minute, second, timeinsec to int
    int hour, minute, second, timeinsec;
    //Ask the user for the hour value
    printf("Enter the value for hour:");
    scanf("%d", &hour);
    //Ask the user for the minute value
    printf("Enter the value for minute:");
    scanf("%d", &minute);
    //Ask the user for the second value
    printf("Enter the value for seconds:");
    scanf("%d", &second);
    //Calculate the total seconds
    timeinsec = second + (minute * 60) + (hour * 60 * 60);
    printf("Total seconds in %02dH:%02dM:%02dS is: %d\n",
    hour, minute, second, timeinsec);
    return 0;
}