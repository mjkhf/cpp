#include <iostream>

using namespace std;

void print_Array(const float the_array[], const int size)
{
  for(int i=0; i<size; i++)
    cout << the_array[i] <<" ";
  return;
}

int main()
{
  const int SIZE=5;
  float my_array[SIZE] = {1, 2, 3, 4 ,5};
  print_Array(my_array, SIZE);
}
