#include <iostream>

using namespace std;

long string_length(const char array_name[]);
void print_reverse(const char array_name[]);

int main()
{
char array_name[10];
cout << "Please enter your name without any space : ";
cin >> array_name;

long length = string_length(array_name);

cout << "name entered is : "<<array_name<<" and size is "<<length<<endl;

  for(long i = length-1; i>=0; i--)
  {
//    cout<<i;
    cout<<array_name[i]<<endl;
  }

}

long string_length(const char array_name[])
{
  long length = 0;
  while(array_name[length] != '\0')
    length++;
  return length;
}

void print_reverse(const char array_name[])
{
  long length = string_length(array_name);

  for(long i = length-1; i>0; i--)
  {
    cout<<array_name[i];
  }
}
