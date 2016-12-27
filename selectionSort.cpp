#include <iostream>

using namespace std;

int main()
{

int a[5], i, j, k, temp, min;
cout<<"enter 5 numbers to be sorted: ";
for (i=0; i<5; i++)
{
//cout<<"enter 5 numbers to be sorted: ";
cin>>a[i];
}

for (i=0; i<4; i++)
{
min = i;
  for (j=i+1; j<5; j++)
  {
      if(a[j] < a[min])
       {
         min = j;
       }}
   temp = a[i];
   a[i] = a[min];
   a[min] = temp;
  
}

for (k=0; k<5; k++)
{
cout<<a[k];
}
}
