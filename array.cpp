#include <iostream>

using namespace std;

int main()
{

  const short SIZE=5;
  short ages[SIZE]={0};
  short sum = 0;
  short average = 0;

  for(short i=0; i<5; i++)
  {
    cout << "Person " << i+1 << ", Enter Your Age: ";
    cin >> ages[i];
  }
  for(short i=0; i<SIZE; i++)
  {
    sum+=ages[i];
  }
  average=sum/SIZE;
  cout << "The average = "<<average<<endl;
  short max=ages[0];
  for(short i=0; i<SIZE; i++)
    if(ages[i]>max)
      max = ages[i];
  cout << "Max age is = "<<max<<endl;
  
}
