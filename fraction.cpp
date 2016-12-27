#include "fraction.h"
#include <iostream>

using namespace std;

void Fraction::readin()
{
  cout<<"Enter NUmerator: ";
  cin>>m_Numerator;
  cout<<"Enter Denominator: ";
  cin>>m_Denominator;
  
  return;
}

void Fraction::print()
{
 cout<<"("<<m_Numerator<<" , "<<m_Denominator<<")";
 return;
}

Fraction Fraction::reciprocal()
{
  Fraction returnable;
  returnable.m_Numerator = m_Denominator;
  returnable.m_Denominator = m_Numerator;
  return returnable;
}

void Fraction::unreduce(const int m)
{
  m_Numerator = m_Numerator * m;
  m_Denominator = m_Denominator * m;
  return;
}

int main()
{

  Fraction f1, f2, f3;
  f1.readin();
  f1.print();
  f2.readin();
 // f2.print();
  f2.unreduce(2);
  f2.print();
  f3 = f1.reciprocal();
  f3.print();
}
