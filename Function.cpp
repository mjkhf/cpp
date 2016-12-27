#include <iostream>

using namespace std;

int get_number ();

int main()
{
  int bob;
  bob = get_number ();
  cout << "Entered integer is "<<bob;
  return 0;
}

int get_number ()
{
  int value_to_get;
  cout << " enter an integer ";
  cin >> value_to_get;
  return value_to_get;
}
