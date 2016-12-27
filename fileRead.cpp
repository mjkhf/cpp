#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream in;
  ofstream out;
  float next_value;
  in.open("input.dat");
  out.open("output.dat");
  
  while(in>>next_value)
	out<<next_value*next_value<<" ";
  in.close();
  out.close();
  return 0;
}
