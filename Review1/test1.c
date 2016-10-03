//* NOT ACTUALLY A C FILE, DO NOT COMPILE *
//1) Indentation
#include <stdio.h>

int main()
{
  int a, b, n = 4, s = 0;
  for (a = 1 ; a < n ; a++)
  {
    for (b = 1; b < a; b++)
    {
      if (b == a/2)
      {
        s = s + a*b;
        printf("%d ", s);
      }
      printf("\n");
    }
  }
}
//And then the program output wil be:
//Indentation Notes:
