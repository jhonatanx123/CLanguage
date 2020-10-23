//calculates a circle's diameter, circumference, and area

#include <stdio.h>
//Predefine pi
#define pi 3.1415926
//Initiate area and print where r is not < 0
void area(float r)

{
  printf("Area: %.3f\n",pi*r*r);
}
//Iniate diameter and print where r is not < 0 
void diameter(float r)

{
  printf("Diameter: %.3f\n",2*r);
}
//Iniate circumference and print where r is not < 0 
void circumference(float r)

{
  printf("Circumference: %.3f\n",2*pi*r);
}
//Main part of the program
int main()

{
  //Iniate r for radius as a float
  float r;
  printf("Enter the value of the radius:\n");
  scanf("%f",&r);
  //Case for if r < 0
  if(r<0)
  {
    printf("Invalid, run code again.\n");
    return 1;
  }
  //If r > 0
  else
  {
    //Case for when r is not < 0
    diameter(r);
    circumference(r);
    area(r);
    return 0;
  }
}