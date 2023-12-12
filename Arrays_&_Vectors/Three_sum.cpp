# include <iostream>
# include <vector>
using namespace std;
int threeSum(int ,int ,vector <int> &);
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

  cout << "Enter the sum : ";
  cin >> sum;
  cout << "Number of pairs are : " << threeSum(sum, size, vect) << endl;
  return 0;
}

int threeSum(int target, int length, vector <int> &v)
{
  int pairs = 0;
  for (int i = 0 ; i < length ; i++ )
    {
      for (int j = i + 1 ; j < length ; j++)
        {
          for (int k = j + 1 ; k < length ; k++)
          {
            if(v[i] + v[j] + v[k] == target)
            {
              pairs++;
              cout << endl << v[i] << " " << v[j] << " " << v[k] << endl;
            }
            else
              continue;
          }
        }
    }
  return pairs;
}