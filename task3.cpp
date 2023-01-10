#include <iostream>
using namespace std;
float taxcalculator(char vcod, float price);
main()
{
  char vcod;
  float price;
  float price_with_tax;
  float taxamount;
  float taxcalculator2;
  while(true)
  {
  cout<<"Enter vehicle code: " ;
  cin>>vcod;
  cout<<"Enter vehicla price: ";
  cin>>price;
  taxcalculator2=taxcalculator(vcod, price);
  price_with_tax=price+taxcalculator2;
  cout<<"Total price with tax "<<price_with_tax<<" ";
  cout<<endl;
  }
}
  float taxcalculator(char vcod, float price)
  {
    float taxamount;
  if(vcod=='M') 
  {
   taxamount=(price*6)/100;
   return taxamount; 
  }
  if(vcod=='E') 
  {
   taxamount=(price*8)/100;
   return taxamount; 
  }
  if(vcod=='S') 
  {
   taxamount=(price*10)/100;
   return taxamount; 
  }
  if(vcod=='V') 
  {
   taxamount=(price*12)/100;
   return taxamount; 
  }
  if(vcod=='T') 
  {
   taxamount=(price*15)/100;
   return taxamount; 
  }
  return 0;
  }
  
