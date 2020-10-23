#include <stdio.h>

int main(void) {
    int base;
    int height;
    printf("What is the base? : \n");
    scanf("%d", &base);

    printf("What is the height? : \n");
    scanf("%d", &height);

    float area = base * height / 2;
    printf("A triangle with base %d and height %d has an area of %f. \n", base, height, area);
    return 0;
}