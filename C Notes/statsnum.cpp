#include "Headers.h"
using namespace std;

//Get mean of values
float getMean(int a[], int aLength)
{
    int sum = 0;
    for (int b = 0; b < aLength; b++)
    {
        sum = sum + a[b];
    }

    return (double)sum / aLength;
};

//Get median of values
double getMedian(int a[], int aLength)
{
    //Sort the array of values
    std::sort(a, a + aLength);

    //Check for even values
    if (aLength % 2 != 0)
        return (double)a[aLength / 2];

    return (double)(a[(aLength - 1) / 2] + a[aLength / 2]) / 2.0;
}

//Get mode values
double getMode(int a[], int aLength)
{
    int num = a[0];
    int mode = num;
    int check = 1;
    int checkMode = 1;

    for (int b = 1; b < aLength; b++)
    {
        if (a[b] == num)
        { //Count occurrences of the numbers
            ++check;
        }
        else
        { //Check a different number
            if (check > checkMode)
            {
                //Mode is the greatest occurence
                checkMode = check;
                mode = num;
            }
            //Reset check for a new number
            check = 1;
            num = a[b];
        }
    }
    return num;
}

//Main function
int main()
{
    //Set array of values to get mean, median, mode
    int a[] = {7, 3, 2, 1, 5, 6, 7};

    //Find the length of the values
    int aLength = sizeof(a) / sizeof(a[0]);

    //Print mean, median and mode
    std::cout << "Mean = " << getMean(a, aLength) << endl;
    std::cout << "Median = " << getMedian(a, aLength) << endl;
    std::cout << "Mode = " << getMode(a, aLength) << endl;
};
