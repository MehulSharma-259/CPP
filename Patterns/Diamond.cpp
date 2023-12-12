#include <iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  int i,j;
  
  // FOR UPPER TRIANGLE
  
  for (i=1 ; i<=rows ; i++)
  {
    for (j=1 ; j<=rows-i ; j++)
      cout << " ";

    for (j=1 ; j<=2*i-1 ; j++)
      cout << "*";

    cout << endl;
  }

  // FOR LOWER TRIANGLE

  int space=1;
  for(i=rows-1 ; i>=1 ; i--)
  {
    for(j=1 ; j<=space ; j++)
      cout << " ";
    for(j=1 ; j<=2*i-1 ; j++)
      cout << "*";

    space++;
    cout << endl;
  }
    
  return 0;
}