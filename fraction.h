#include <iostream>

class Fraction
{
  public:
    void readin();
    void print();
    Fraction reciprocal();
    void unreduce(const int m);
  private:
    int m_Numerator;
    int m_Denominator;
};
