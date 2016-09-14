/* Paul Kwak
Acts as a text driven basic calculator
for add, subtract, multiply, and divide
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//prototyping functinos
float addition(float, float);
float subtraction(float, float);
float multiplication(float, float);
float division(float, float);


int main()
{
  float c, q, num1, num2;
  while (q != 5) {
    cout << "What would you like to do?" << endl;
    cout << right << setw(19) << "1 for addition" << endl;
    cout << right << setw(22) << "2 for subtraction" << endl;
    cout << right << setw(25) << "3 for multiplication" << endl;
    cout << right << setw(19) << "4 for division" << endl;
    cout << right << setw(14) << "5 to exit" << endl;

    cout << "Enter your choice: " << endl;
    cin >> q;

    //condition if they choose 5
    if (q==5)
    {
      cout << "Thank you!" << endl;
      return 1;
    }

    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "Inputs: " << num1 << ", " << num2 << endl;

    if (q==1)
    {
      c = addition(num1,num2);
      cout << "(" << num1 << ")" << " + "
      << "(" << num2 << ")" << " = "
      << c << endl;
    }

    if (q==2)
    {
      c = subtraction(num1,num2);
      cout << "(" << num1 << ")" << " - "
      << "(" << num2 << ")" << " = "
      << c << endl;
    }

    if (q==3)
    {
      c = multiplication(num1,num2);
      cout << "(" << num1 << ")" << " * "
      << "(" << num2 << ")" << " = "
      << c << endl;
    }

    if (q==4)
    {
      c = division(num1,num2);
      cout << "(" << num1 << ")" << " / "
      << "(" << num2 << ")" << " = "
      << c << endl;
    }

  }
}

float addition(float a, float b)
{
  float c;
  c = a + b;
  return c;
}

float subtraction(float a, float b)
{
  float c;
  c = a - b;
  return c;
}

float multiplication(float a, float b)
{
  float c;
  c = a * b;
  return c;
}

float division(float a, float b)
{
  float c;
  c = a / b;
  return c;
}
