#include <iostream>

using namespace std;

int main()
{
int input;
do
 {
//   int input;
   cout << "Enter number between 2 and 174 ";
   cin >> input;
 }	while (!(input >= 2 && input <= 174 && input%3 == 0));

}
