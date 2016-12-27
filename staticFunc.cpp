#include <iostream>

using namespace std;

void my_function();

int main()
{
for (int i = 0; i < 5; i++)
  my_function();

return 0;
}

void my_function()
{

  static short count = 1;
  cout << " Count Value = "<<count<<(count == 1 ? "time" : "times")<<endl;
  count++;
  return;
}
