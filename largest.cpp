#include <iostream>
using namespace std;

void largest(const int val);

int main()
{
  for (int i=0; i<7; i++)
	largest(i);
  return 0;
}

void largest(const int val)
{
  static int largest = val;
  if (largest < val)
    largest = val;
  cout << "largest value = "<<largest<<endl;
  return;
}
