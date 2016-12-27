#include "fractionmul.h"


void Fraction::setNumer(const int numer)
{
  m_Numerator = numer;
  return;
}

bool Fraction::setDenom(const int denom)
{
  bool set = false;
  if(denom !=0)
   {
     set = true;
     m_Denominator = denom;
   }
  return set;
}

Fraction mult_fracs(const Fraction & lhs, const Fraction & rhs)
{
  Fraction temp;
  temp.setNumer(lhs.getNum() * rhs.getNum());
  if(! (temp.setDenom(lhs.getDen() * rhs.getDen())))
   {
     cout<<"Error"<<endl;
     exit(2);
   }
return temp;
}

