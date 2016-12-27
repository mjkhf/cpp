#include <iostream>

using namespace std;

int main()
{

float celc, fahr;

cout<<"\t\t Welcome to temperature conversion program"<<endl<<endl;
cout<<"Please enter the temperature in fahrenheit:    ";
cin>>fahr;

celc = (5.0/9) * (fahr - 32);
cout<<"\n\nYour temperature input of "<<fahr<<" degrees fahrenheit is: "<<celc<<endl;
cout<<"Have a nice day"<<endl;

return 0;

}
