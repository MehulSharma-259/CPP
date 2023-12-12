# include <iostream>
# include <vector>
using namespace std;
int main()
{
  vector <int> vect;
  int sum, size;
  cout << "Enter the size : ";
  cin >> size;
  
  for (int i = 0 ; i < size ; i++)
    {
      int element;
      cout << "Enter the " << i << "th element : ";
      cin >> element;
      vect.push_back(element);
    }
  int i = 0, k;
  while(vect[i] < vect[i + 1])
    i++;
  k = i + 1;
  
  cout << k << endl;
  reverse(vect.begin() + k, vect.end());
  reverse(vect.begin(), vect.begin() + k);
  reverse(vect.begin(), vect.end());
  for(int j = 0 ; j < size ; j++)
    cout << vect[j] << " ";
  return 0;
}