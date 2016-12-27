#include <iostream>

using namespace std;

int main()
{
  int rows;
  cout << " Insert number of rows: ";
  cin >> rows;

  for(int i = 0; i<rows; i++)
  {
    for(int j=1; j<=i; j++)
    {
      cout <<"  ";
    }
    for(int k=1; k<=rows-i; k++)
      cout<<"* ";
    
   cout << endl;
  }
}    
