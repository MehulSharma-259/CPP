# include <iostream>
# include <vector>
using namespace std;
void sortLinear(int, vector <int> &);
void sortHalfByTwoPointer(int, vector <int> &);
void twoPointer(vector <int> &);
void swap(int &, int &);
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
  //sortLinear(size, vect);
  //sortHalfByTwoPointer(size, vect);
  twoPointer(vect);
  return 0;
}
void sortLinear(int length, vector <int> &v)
{
    int i = 0, zeroes = 0;
    while (i < length)
    {
        if (v[i] == 0)
            zeroes++;
        i++;
    }
    i = 0;
    while (i < length)
    {
        if(i < zeroes)
            v[i] = 0;
        else
            v[i] = 1;
        
        i++;
    }
    cout << "Sorted array is : ";

    i = 0;

    while (i < length)
    {
      cout << v[i] << " ";
      i++;
    }
    cout << endl;
}

void sortHalfByTwoPointer(int length, vector <int> &v)
{
  int zeroes = 0;

  for (int i = 0 ; i <= (length - 1)/ 2 ; i++)
  {
    if (v[i] == 0)
      zeroes++;
    
    if (v[length - 1 - i] == 0 && ((length - 1 - i) != i))
      zeroes++;
  }
  for (int i = 0 ; i < length ; i++)
  {
    if(i < zeroes)
      v[i] = 0;
    else
      v[i] = 1;
  }
  for (int i = 0 ; i < length ; i++)
    cout << v[i] << " ";


  cout << endl;
}
void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void twoPointer(vector <int> &v)
{
  int left_ptr = 0, right_ptr = v.size() - 1;

  while (right_ptr > left_ptr)
  {
    cout << left_ptr << ", " << right_ptr << endl;

    if(v[left_ptr] == 1 && v[right_ptr] == 0)
    {
      swap(v[left_ptr], v[right_ptr]);
      left_ptr += 1;
      right_ptr -= 1;
    }

    if (v[right_ptr] == 1)
      right_ptr -= 1;

    if (v[left_ptr] == 0)
      left_ptr += 1;

    
  }
  for(int element : v)
    cout << element << " ";

  cout << endl;
}