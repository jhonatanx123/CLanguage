#include <stdio.h>

int main(void) {
    //define an int called 'a' and intialize it to 0
    int a = 0; 
    int b = 0;
    float c = 0.0;

    //read an integer from standard inout. Note the ampersand before 'a'
    printf("Enter an integer number: ");
    scanf("%d", &a);

    //read one integer and one float from standard input
    printf("ENter one integer and one float: ");
    scanf("%d %f", &b, &c);
    printf("You input integer = %d and float = %f \n", b , c);

    //print the sum of a and b
    printf("%d +%d = %d\n", a, b, a + b);
}