#include <iostream>

using namespace std;

struct point
{
  float m_xcoord, m_ycoord;
};

int main()
{
  point p1,p2;
  p1.m_xcoord = 4;
  p1.m_ycoord = 5;
  cout << "Enter x coordinate for p2 : ";
  cin >> p2.m_xcoord;
  cout << "Enter y coordinate for p2 : ";
  cin >> p2.m_ycoord;
  cout << " the coordinates are "<<p1.m_xcoord<<" "<<p1.m_ycoord<<" "<<p2.m_xcoord<<" "<<p2.m_ycoord<<endl;
}
