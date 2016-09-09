#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

int main() {
  float x, y;
  float i, j;
  float xmin, xmax, ymin, ymax;
  cout << "A plot of y= 10*(1+sin(x)) from x=0 to 20.0 " << endl;
  cout << right << setw(4) << "X" << right << setw(11) << "Y" << endl;
  ymax = INT_MIN; //from climits library
  ymin = INT_MAX; //setting ymax to lowest number for comparison to eventually reach the graph's max.
    for (x=0; x<20; x=x+.2)
    {
      y= 10*(1+sin(x));
        if (y>ymax) {
          ymax = y;
          xmax = x;
        }
        if (y<ymin) {
          ymin = y;
          xmin = x;
        }
      cout << left << setw(10) << fixed << setprecision(2) << x << left << setw(10) << fixed << setprecision(2) << y;
        for (i=0; i <= y; i++) {
          cout << "#";
        }
        cout << endl;

  }
  cout << endl;
  cout << "The maximum of " << ymax << " was at x=" << xmax << endl;
  cout << "The minimum of " << ymin << " was at x=" << xmin << endl;
}
