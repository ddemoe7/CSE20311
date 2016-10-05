#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i, j, m, n, a;
  cout << "Enter # of rows: " << endl;
  cin >> m;
  cout << "Enter # of columns: " << endl;
  cin >> n;
  cout << endl;
//then prints top row of numbers
  for (a=0; a<m+1; a++)
  {
    if (a==0)
    {
      cout << "*" << setw(5);
    }
    else
    {
      cout << a << setw(5);
    }
  }
  cout << endl;
//then prints column start and multiplication table

  for (i=1; i<m+1; i++)
  {
    cout << left << i << setw(5);
    //b/c default is right, so repeat left
      for (j=1; j<n+1; j++)
      {

        cout << i*j << setw(5);

      }
      cout << endl;
  }
  return 0;
}
