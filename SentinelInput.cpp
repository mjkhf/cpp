#include <iostream>

using namespace std;

int main()
{
  int input;
  cout << "Please enter a number greater than 10 and less than 20: ";
  cin >> input;

  while (input < 10 || input > 20)
  {
    cout << " The input is inacceptable, please follow instructions "<<endl;
    cin >> input;
  }

  cout << "The number entered is " << input <<endl;

}
