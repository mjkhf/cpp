#include <iostream>

using namespace std;

int main()
{
  float avrg;
  long sum;
  int i, input;

  cout << " Enter the number of terms for which average is required: ";
  cin >> input;

  for(i=i; i<=input; i++)
    sum += i;

  avrg = static_cast<float>(sum) / input;
  cout << "Average is: "<<avrg<<endl;
}
  
