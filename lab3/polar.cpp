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

//prototyping functions
float getDistanceR(float, float);
float getTheta(float, float);
string getQuad(float, float);


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


float getDistanceR(float x, float y)
{
  float r;
  r = sqrt(pow(x,2)+pow(y,2));
  return r;
}


float getTheta(float x, float y)
{
  float theta;
  theta = atan(y/x);
  if (x < 0 && y > 0)
  {
    theta = theta + 3.14;
  }
  if (x < 0 && y < 0)
  {
    theta = theta - 3.14;
  }
  return theta;
}

string getQuad(float x, float y)
{
  if (x==0 && y==0)
  {
    string quad0 = "The point is at the origin";
    return quad0;
  }
  if (x > 0 && y > 0)
  {
    string quad1 = "The point is in Quadrant I";
    return quad1;
  }
  if (x < 0 && y > 0)
  {
    string quad2 = "The point is in Quadrant II";
    return quad2;
  }
  if (x < 0 && y < 0)
  {
    string quad3 = "The point is in Quadrant III";
    return quad3;
  }
  if (x > 0 && y > 0)
  {
    string quad4 = "The point is in Quadrant IV";
    return quad4;
  }
  return "";
}
/*Put getTheta with right quadrants about radians
and make quadrant a function*/
