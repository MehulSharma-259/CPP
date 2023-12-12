# include <iostream> 
# include <vector>
# include <cstdlib>
using namespace std;
int main()
{
  int size, odd = 0, even = 0;
  vector <int> vect;
  cout << "Enter the size : ";
  cin >> size;

  for (int i = 0 ; i < size ; i++)
    {
      cout << "Enter the " << i << "th element : ";
      int element;
      cin >> element;
      vect.push_back(element);
    }
  
  for (int i = 0 ; i < size ; i++)
    {
      if(i % 2 == 0)
        even += vect[i];
      else
        odd += vect[i];
    }
  cout << "Difference of elements at odd and even idices is : " << abs(even - odd) << endl;
  
  return 0;
}