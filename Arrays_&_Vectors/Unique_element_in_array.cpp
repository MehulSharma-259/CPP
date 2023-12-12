# include <iostream>
# include <vector>
using namespace std;
void uniqueNumber(int ,vector <int> &);
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
  
  uniqueNumber(size, vect);
  
  return 0;
}

void uniqueNumber(int length, vector <int> &v)
{
  bool answer = false;
  int unique, arr[2];
  for (int i = 0 ; i < length ; i++)
    {
      for (int j = 0 ; j < length ; j++)
        {
          arr[0] = v[i];
          if (v[i] == v[j] && i != j)
            arr[1] = v[j];    
        }
      
      if (arr[0] != arr[1])
      {
        unique = arr [0];
        answer = true;
        break;
      }
    }
  
  if (answer == true)
    cout << "Unique element is : " << unique << endl;

  else
    cout << "No unique number !!" << endl;
}