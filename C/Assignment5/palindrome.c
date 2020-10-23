//program finds the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
int testPalindrom(int number) 
{
// declare a rev variable to store the reversed value of number
// declare a copy variable and initiate it with the value of number
int rev = 0, copy = number;
// this loop will run until copy value will becomes 0 and at termination
// of this loop reversed value of number will be stored in the variable rev
while(copy) 
{
rev = 10 * rev + (copy % 10);
copy = copy /10;
}
// return 1 if rev is equals to the number else it returns 0
return rev == number;
}

int main(void) 
{
// declare three variables first two variable will store the 3-digit numbers
// whose product returns the largest palindrome max will store the product value
int num1, num2, max = 0;
// declare a nested loop which check all possible combination of 3-digit numbers
for (int i = 100; i <= 999; i++) 
{
for (int j = 100; j <= 999; j++) 
{
int number = i * j;
// check whether the number is palindrome or not and also check whether
// it is known greatest palindrome or not
if (testPalindrom(number) && number > max) 
{
max = number;
num1 = i;
num2 = j;
}
}
}
// Print the output
printf("%u, %u, %u\n",num1,num2,max);
return 0;
}