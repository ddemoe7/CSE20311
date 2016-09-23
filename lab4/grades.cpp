/* Paul Kwak

Reads in a data file, and then computes the average and the standard
deviation.
Assume:
Max is 50 grades, Works for any data file, Unix input redirection to read in data

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int nums[51];
  float sum = 0;
  float average = 0;
  int grade = 0, count = 0;
  int i;
  float a = 0;
  float b = 0;
  float l;
  float val = 0;

  //to read in values for array
  nums[count] = grade;
  while (grade != -1)
  {
    cin >> grade;
    cout << grade << endl;
    nums[count]= grade;
    count++;
  }

  //display inputted values
  for (int j = 0; j < count - 1; j++)
  {
    cout << nums[j] << endl;
  }
  //average calculations
  for (int k = 0; k < count - 1; k++)
  {
    sum += nums[k];
    a = a + 1;
  }

  average = sum/a;

  //standard deviation calculations
  for (int l = 0; l < count - 1; l++)
  {
    val = val + pow((nums[l] - average),2);
    b = b + 1;
  }

  val = val/(b-1);
  val = pow(val,0.5);

  cout << "there are " << count << " numbers." << endl;
  cout << "their average is: " << average << endl;
  cout << "their standard deviation is: " << val << endl;

  return 0;
}
