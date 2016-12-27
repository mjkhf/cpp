#include <iostream>

using namespace std;

template <typename T, typename U>

void repeater(int num_times, T t1, U u1)
{

  for (short i = 0; i < num_times; i++)
  {
    cout<<"the numbers are "<<t1<<" and "<<u1<<endl;
    return;
  }
}

int main()
{
  char alphabet = 'a';
  float number = 4.4;
  repeater(5, alphabet, number);
  return 0;
}
