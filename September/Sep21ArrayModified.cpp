#include <iostream>
using namespace std;

void display_array(int [], int);
void change_array(int [], int);

int main()
{
  int arr[] = {1,2,5,6,8,9};
  int size = sizeof(arr)/sizeof(int);
  //this ratio is based off of the number of bit needed to store array, and
  //bit for int. Divide them, and you get the size of array with same type
  //we need to pass both the array and it's size, b/c the func doesn't know
  //when to stop without knowing size

  cout << "before: ";
  display_array(arr,size);
  change_array(arr,size); //increment each value by 2
  cout << "after: ";
  display_array(arr,size);

  return 0;
}

void change_array(int a[], int size) //a[] indicates that a is an array
{
  for (int i=0; i <size; i++)
  {
    a[i] += 2;
  }
}

void display_array(int a[], int size)
{
  for (int i =0; i<size; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
