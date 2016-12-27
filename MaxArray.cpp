#include <iostream>

using namespace std;

int main()
{
cout << "ENter size of the array: ";
int size;
cin >> size;
int array[size], key, i;

for(int j=0; j<size; j++)
{
  cout << "Enter "<<j<<" element";
  cin>>array[j];
}

for(int a=0; a<size; a++)
{
  cout<<"Array[ "<<a<<" ] = ";
  cout<<array[a]<<endl;
}

int maximum=array[0];
for(int i=0;i<size;i++)
{
  if(array[i]>maximum)
     maximum=array[i];
}

cout << "maximum = "<<maximum;
return 0;
}
