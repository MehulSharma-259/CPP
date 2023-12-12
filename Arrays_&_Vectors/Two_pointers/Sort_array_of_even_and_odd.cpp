# include <iostream>
# include <vector>
using namespace std;
void swap(int &, int &);
void twoPointer(vector <int> &);
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
  twoPointer(vect);
  return 0;
}
void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void twoPointer (vector <int> &v)
{
    int left_ptr = 0, right_ptr = v.size() - 1;

    while (right_ptr > left_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0)
        {
          swap(v[left_ptr], v[right_ptr]);
          left_ptr++;
          right_ptr--;
        }
        
        if (v[left_ptr] % 2 == 0)
          left_ptr++;
        
        if (v[right_ptr] % 2 == 1)
          right_ptr--;
    }
    for (int element : v)
      cout << element << " ";

    cout << endl;
}