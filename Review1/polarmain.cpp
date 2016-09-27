//Paul Kwak

/* Polar Equations
x = rcos(theta)
y = rsin(theta)
r^2 = (x^2 + y^2)

Displays the point's corresponding polar coordinates (r,theta)
The quadrant that the point is in
The axis it is on, or the origin
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#include "polarfn.h"

int main()
{
  float x, y, r, theta;

  cout << "x-coordinate: " << endl;
  cin >> x;
  cout << "y-coordinate: " << endl;
  cin >> y;

  //calling getDistanceR
  r = getDistanceR(x,y);
  cout << r << endl;

  //calling getTheta
  theta = getTheta(x,y);
  cout << theta << endl;
  cout << "(" << r << ", " << theta << ")" << endl;

  //calling getQuad
  string display = getQuad(x,y);
  cout << display << endl;
}
