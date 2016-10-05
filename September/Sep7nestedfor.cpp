#include <iostream>
using namespace std;

int main () {
  int i, j;
  int sum = 0;

  for(i=1; i<=3; i++) {
    for (j=1; j<=2; j++) {
      sum = sum + i*j;
    }
  }

  cout << "sum is: " << sum << endl;
  return 0;
}

/* today's example showed nested for loops
In the order of... 0 + (1*1) + (1*2) + (2*1) + (2*2)
+ (3*1) + (3*2) = 18
Also, the scope of the variables in the for loop make
it so that the variables in the loop only exist in the loop
However, we initialized them previously, so they can
be called from other places in the code.
