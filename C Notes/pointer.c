#include <stdio.h>

int main(){
    int a =7;
    int *aPtr; // un-intialized Pointer
    aPtr = &a; //Stores address of a in aPtr

    printf("a = %d\naPtr = %p\n", a, aPtr);
}
