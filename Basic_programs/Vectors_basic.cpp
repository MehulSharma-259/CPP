# include <iostream>
# include <vector>
using namespace std;
int main()
{
  vector <int> v;
  /*cout << "Size : " << v.size() << endl;
  cout << "Capacity : " << v.capacity() << endl;

  v.push_back(20);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.push_back(27);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.push_back(33);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.resize(5);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.resize(14);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.resize(24);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.resize(30);
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.pop_back();
  v.pop_back();
  cout << "Size : " << v.size () << endl;
  cout << "Capacity : " << v.capacity () << endl;

  v.begin();
  v.end();*/
  for(int i = 0 ; i <= 6 ; i++)
    {
      int element;
      cin >> element;
      v.push_back(element);
      //cin >> v[i];
      // Here we are not using v[i] as we use in array because we have not defined the size of the vector so v[i] does not exist but by doing this way we are increasing the size of the vector which is not allowed.
    }
  cout << endl;
  for(int i = 0 ; i <= 6 ; i++)
    cout << v[i] << " ";
  cout << endl;
  vector <int> initialize(99, 0);// (size, initial value)
  v.insert(v.begin() + 2, 999);
  
  // For each loop
  for (int element : v)
    cout << element << " ";
  cout << endl;

  v.erase(v.end() - 3);
  
  int i = 0;
  while (i < v.size())
    cout << v[i++] << " ";
  cout << endl;
  
  return 0;
  
}