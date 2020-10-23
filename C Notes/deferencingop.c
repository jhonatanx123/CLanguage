#include <stdio.h>

int main(){
    int a =7, b;
    int *aPtr; // un-intialized Pointer
    
    aPtr = &a; //Stores address of a in aPtr
    b = *aPtr;

    printf("a = %p\naPtr = %p\n*aPtr = %p\n ", a, aPtr, b);
}