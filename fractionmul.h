#include <iostream>
using namespace std;

class Fraction
{
  public:
    void readin();
    void print();
    Fraction reciprocal();
    void unreduce(const int numer);
    int getNum() const { return m_Numerator; }
    int getDen() const { return m_Denominator; }
    void setNumer(const int numer);
    bool setDenom(const int denom);
  private:
    int m_Numerator;
    int m_Denominator;
};
