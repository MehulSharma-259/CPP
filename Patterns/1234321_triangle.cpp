#include <iostream>
using namespace std;
int main()
{
  int rows, columns;
  cout << "Enter the number of rows:  ";
  cin >> rows;
  int i, j;

  for(i=1 ; i<=rows ; i++)
  {
    for(j=1 ; j<=rows-i ; j++)
      cout << " ";
    for(j=1 ; j<=i ; j++)
      cout << j;
    for(j=i-1 ; j>=1 ; j--)
      cout << j;
    
    cout << endl;
  }
  return 0;
}