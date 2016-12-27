#include <iostream>
#include <ctime>

using namespace std;

long my_rand();

int main()
{
  for (int i=5; i>0; i--)
    cout<<my_rand()<<endl;
  return 0;
}

long my_rand()
{
  static long seed=time(NULL);
  seed = (104729 + seed * 7919) % 15485863;
  return abs(seed);
}
