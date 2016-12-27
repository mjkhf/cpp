#include <iostream>

using namespace std;

int main()
{

long integer =1;
long sum, counter ;
cout << "Please enter the integers for which sum is required :";
cin >> counter;

for (integer=1; integer <= counter; integer++ )
 {
  sum += integer;
 }

cout << "The sum of first "<<counter<<" integers is "<<sum<<endl;

}
