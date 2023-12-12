# include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 3, 7, 10, 11, 20, 38};
  
  // FOR EACH LOOP

  for(int element : arr)
    cout << element << endl;

  char vowels[5];

  // Taking input from for each loop
  // Here we are using reference variable because it will refer to a[i] position otherwise it will be a new variable and no value will be stored in array.
  
  for(char &ele : vowels)
    cin >> ele;
  
  // Char ele1 is used as each element is referred not its index.
  
  for(char ele1 : vowels)
    cout << ele1 << " ";

  cout << endl;
  return 0;
  
}