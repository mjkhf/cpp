#include <iostream>

using namespace std;

int main()
{
short ages[5] = {5, 8 ,4, 3, 2};

for(short i=1; i<5; i++)
  for(short j=0; j<5-i; j++)
    if(ages[j] > ages[j+1])
    {
        int swap = ages[j];
	ages[j] = ages[j+1];
	ages[j+1] = swap;
	cout << ages[j];
     }
    	
}
