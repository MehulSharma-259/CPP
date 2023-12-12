# include <iostream>
# include <vector>
using namespace std;
void secondLargestElement(int ,vector <int> &);
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
  
  secondLargestElement(size, vect);
  
  return 0;
}
void secondLargestElement(int length, vector <int> &v)
{
    int max = INT_MIN, secondMax = INT_MIN;
    int i = 0;
    while (i < 2)
    {
        for (int j = 0 ; j < length ; j++)
        {
            if (v[j] > max)
                max = v[j];
            if (i == 1 && max > v[j] && v[j] > secondMax)
                secondMax = v[j];
        }
        i++;
    }
    cout << "Second max element is : " << secondMax << endl;
}