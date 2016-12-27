#include <iostream>

using namespace std;

template <typename T>
void swapCstm (T & t1, T & t2)
{
  T temp = t1;
  t1 = t2;
  t2 = temp;
  cout<<"swapped values t1 = "<<t1<<"and t2 = "<<t2<<endl;
  return;
}

int main ()
{

  int a = 4, b = 8;
  float c = 4.5, d = 8.8;
  char c1 = 'y', c2 = 'x';

  swapCstm(a, b);
  swapCstm(c, d);
  swapCstm(c1, c2);
  return 0;
}
