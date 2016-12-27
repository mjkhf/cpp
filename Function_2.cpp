#include <iostream>

using namespace std;

void greetings();

int get_number();
float average (const float val1, const float val2);

int main()
{
float bob, sue, the_average;
greetings();

bob = get_number();
sue = get_number();

the_average = average(bob, sue);
cout << "The average is "<<the_average;
return 0;
}

void greetings()
{
cout << " Hello Runner";
return;
}

int get_number()
{
float value_to_get;
cout << "please enter the value for average calculation: ";
cin >> value_to_get;
return value_to_get;
}

float average (const float val1, const float val2)
{
float sum, avg;
sum = val1 + val2;
avg = sum / 2;
return avg;
}

