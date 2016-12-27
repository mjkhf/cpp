#include <iostream>

using namespace std;

int main()
{
  int rows;
  cout << "Please tell the rows for star pattern: ";
  cin >> rows;
  for (int x = 1; x <= rows; x++)
  {
    for (int i = 0; i <= rows - x; i++)
    {
      cout << "* ";
    }
    cout << endl;
  }
} 
