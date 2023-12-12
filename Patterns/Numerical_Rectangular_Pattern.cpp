#include <iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  int i,j;

  for(i=1 ; i<=rows ; i++)
  {
    for(j=i ; j<=rows ; j++)
      cout << j;
    for(j=1 ; j<i ; j++)
      cout << j;

    cout << endl;
  }
  return 0;
}