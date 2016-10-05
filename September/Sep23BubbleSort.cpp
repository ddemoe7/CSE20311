#include <iostrea>
using namespace std;

int main()
{
  int a[MAX], i, n;

  cout << "Enter positive integers followed by a -1: ";
  //read in the numbers into the array
  cin >> a[n=0]; // read the fist number
  while (a[n] != -1)
  {
    ++n;
    cin >> a[n]; // read the next number
  }

  bubble(a,n); // sort array
  //display the numbers in sorted order
  for (i = 0; i < n; i++)
  {
    cout << a[i] << endl;


  }
}
