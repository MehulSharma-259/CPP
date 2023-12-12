#include <iostream>
using namespace std;
int main()
{
  int rows, columns;
  cout << "Enter the number of rows and columns: ";
  cin >> rows >> columns;
  int i, j;

  for(i=1 ; i<=rows ; i++)
  {
    for(j=1 ; j<=columns ; j++)
    {
      if((i+j) % 2 == 0)
        cout << 1;
      else if ((i+j) % 2 == 1)
        cout << 2;
    }
    cout << endl;
  }
  return 0;
}
