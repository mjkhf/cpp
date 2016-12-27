#include <iostream>

using namespace std;

class person
{

char name[30];
int age;

public:

void getData(void);
void displayData(void);

};

void person::getData(void)
{
cout << "Enter name ";
cin >> name;
cout << "Enter age ";
cin >> age;
}

void person::displayData(void)
{
cout << "name is "<<name<<endl;
cout << "age is "<<age<<endl;
}

int main()
{
person p;

p.getData();
p.displayData();

return 0;
}
