//Jhonatan Roopnarine
//Assignment 8
#include<iostream>
#include<conio.h>
using namespace std;

//Create Temperature class
class Temperature

{
//Private float celcius 
float celcius;
//Public Celsius constant integer equal to 1
const int CELCIUS =1;
//Public Kelvin constant integer equal to 3
const int KELVIN =3;

public:
//Public Fahrenheit constant integer equal to 2
static const int FAHRENHEIT=2;
//Public operation Temperature
Temperature(float tem, int system)

{
//Hardwiried temperature used
celcius= tem;

}
//Float operation for getting the celcius temp
float getCelcius()

{
//Calculating celcius
celcius=(celcius-32)*5/9;
//Return celcius after compuation
return(celcius);

}
//Float operation for getting the kelvin temp
float getKelvin()

{
//Return kelvin with compuation
return(celcius+273.15);

}

};
//Main program provided
int main()

{
//Temp is set to 68.0
float temp=68.0;
//Print out given temp as F
cout<<"FAHRENHEIT : "<<temp<<endl;
//Program completes what Temperature class should do
Temperature t(temp,Temperature::FAHRENHEIT);//It's value will be assigned to system as 2
//Print  out temp in C
cout<<"in Celcius : "<<t.getCelcius()<<endl;
//Print out temp in K
cout<<"in Kelvin : "<<t.getKelvin()<<endl;

}