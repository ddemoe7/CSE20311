#include <iostream>
using namespace std;

int main()
{
  int nums[20];
  int sum = 0;
  int a, i, count = 0;

  cout << "enter a few positive numbers from the keyboard (not more than 19),"
  << "followed by a -1: ";

  //to read in values for array
  cin >> a;
  nums[count] = a;
  while (a != -1)
  {
    nums[count]= a;
    count++;
    cin >> a;
  }

  //display inputted values
  for (int j=0; j<count; j++)
  {
    cout << nums[j] << endl;
  }

  for (int k = 0; k < count; k++)
  {
    sum += nums[k];
  }

  cout << "there are " << count << " numbers." << endl;
  cout << "their sum is: " << sum << endl;

  return 0;
}
