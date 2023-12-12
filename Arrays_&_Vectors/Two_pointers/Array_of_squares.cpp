#include <bits/stdc++.h>
using namespace std;
void swap(int &, int &);
void squareSorted(vector <int> &);
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
void squareSorted(vector <int> &v)
{
    for (int i = 0 ; i < v.size() ; i++)
        v[i] = abs(v[i]);

    for (int i = 0 ; i < v.size() ; i++)
    {
        for (int j = 0 ; j < v.size() - 1 - i ; j++)
        {
            if(v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }

    for (int i = 0 ; i < v.size() ; i++)
      v[i] = v[i] * v[i];
      
    for (int element : v)
        cout << element << " ";

    cout << endl;
}

void twoPointer(vector <int> &v)
{
  int left_ptr = 0, right_ptr = v.size() - 1;
  vector <int> answer;
  while (left_ptr <= right_ptr)
  {
    if (abs(v[left_ptr]) < abs(v[right_ptr]))
    {
      answer.push_back(v[right_ptr] * v[right_ptr]);
      right_ptr--;
    }
    else
    {
      answer.push_back(v[left_ptr] * v[left_ptr]);
      left_ptr++;
    }
  }


  for (int element : answer)
    cout << element << " ";

  cout << endl;
}