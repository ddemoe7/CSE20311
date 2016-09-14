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
using namespace std;

//prototyping functions
float getDistanceR(float, float);
float getTheta(float, float);


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

  //determining quadrant
  if (x==0 && y==0)
  {
    cout << "The point is at the origin" << endl;
  }
  if (x > 0 && y > 0)
  {
    cout << "The point is in Quadrant I" << endl;
  }
  if (x < 0 && y > 0)
  {
    cout << "The point is in Quadrant II" << endl;
  }
  if (x < 0 && y < 0)
  {
    cout << "The point is in Quadrant III" << endl;
  }
  if (x > 0 && y > 0)
  {
    cout << "The point is in Quadrant IV" << endl;
  }

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
  return theta;
}

/*Put getTheta with right quadrants about radians
and make quadrant a function*/
