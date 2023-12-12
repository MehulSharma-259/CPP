#include <iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  int i, j;
  char character;
  // FOR UPPER TRIANGLE

  for (i = 1; i <= rows; i++)
  {
    character = 'A';
    for (j = 1; j <= rows - i; j++)
      cout << " ";

    for (j = 1; j <= 2 * i - 1; j++)
    {
      cout << character;
      character++;
    }

    cout << endl;
  }

  // FOR LOWER TRIANGLE

  int space = 1;
  for (i = rows - 1; i >= 1; i--)
  {
    character = 'A';
    for (j = 1; j <= space; j++)
      cout << " ";
    for (j = 1; j <= 2 * i - 1; j++)
    {
      cout << character;
      character++;
    }

    space++;
    cout << endl;
  }

  return 0;
}