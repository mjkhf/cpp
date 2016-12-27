#include <iostream>

using namespace std;

void swapval(int & val1, int & val2);

int main()
{
int a = 10, b = 20;

swapval(a, b);
cout << "a = "<<a<<"b = "<<b<<endl;
}

void swapval(int & val1, int & val2)
{
int temp = val1;
val1 = val2;
val2 = temp;
return;
}
