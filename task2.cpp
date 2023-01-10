#include <iostream>
using namespace std;
main()
{
 int lenght;
 int width;
 int height;
 string unit;
 double volume;
 int cm;
 int km;
 int mm;

 cout << "Enter length: ";
 cin >> lenght;
 cout << "Enter width: ";
 cin >> width;
 cout << "Enter height: "; 
 cin >> height;
 cout << "Enter unit for volume: ";
 cin >> unit;

 volume = (lenght*width*height)/3;
 cm = volume * 1000000;
 km = volume * 0.000000001;
 mm = volume * 1000000000;

 if(unit=="centimeter")
  {
   cout << "Volume of pyramid is "<<cm;
  }
 if(unit=="kilometer")
  {
   cout << "Volume of pyramid is "<<km;
  }
 if(unit=="milimeter")
  {
   cout << "Volume of pyramid is "<<mm;
  }
 if(unit=="meter")
  {
   cout << "Volume of pyramid is "<<volume;
  }
  
  
 
 
}