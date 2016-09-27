#include <iostream>
#include <cmath>
#include <string>
using namespace std;

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
  if (x > 0 && y < 0)
  {
    theta = theta + 3.14; 
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
