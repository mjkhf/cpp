#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

  char file[20];
  ifstream fin;

  do
  {
    fin.clear();
    cout << " enter the filename: ";
    cin.getline(file, 20);
    fin.open(file);
  }while(!fin);
}
