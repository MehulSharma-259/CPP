# include <iostream>
# include <vector>
using namespace std;
int main()
{
  vector <int> given;
  int length, i = 0, index = -1, search;
  cout << "Enter the number of elements you want to enter : ";
  cin >> length;

  while (i < length)
    {
      int element;
      cin >> element;
      given.push_back(element);
      i++;
    }
  
  cout << "Enter the element you want to search : ";
  cin >> search;
  
  for(i = 0 ; i < length ; i++)
    {
      if(given[i] == search)
        index = i;
    }

  if(index == -1)
    cout << "Element not found !!" << endl;
  
  else 
    cout << search << " found an index " << index << endl;
  return 0;
  
}