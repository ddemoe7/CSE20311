#include <iostream>
#include <cmath>
using namespace std;

void compute(int, int, int &, int &);

int main()
{
  int a, b, circ, area;

  cout << "enter sides: ";
  cin >> a >> b;
  compute(a,b,circ,area);

  cout << "circumference is: " << circ << endl;
  cout << "area is: " << area << endl;

  //the point is here is to show that while you could have two separate funcs
  //you could just have one! (use pointer)
}

void compute(int a, int b, int &circ, int &area) //& for modified variables
//two ins (a,b) two outs (circ,area)
{
  circ = 2*(a+b);
  area = a*b;
}
