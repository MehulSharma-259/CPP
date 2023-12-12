# include <iostream>
# include <vector>
using namespace std;

int twoSum(int target, int length, vector <int> &v)
{
  int pairs = 0;
  for (int i = 0 ; i < length ; i++ )
    {
      for (int j = i + 1 ; j < length ; j++)
        {
            if(v[i] + v[j] == target)
            {
              pairs++;
              cout << endl << v[i] << " " << v[j] << endl;
            }
            else
              continue;
        }
    }
  return pairs;
}

void two_sum_optimised(vector <int> v, int target_sum) {

  int left_ptr = 0, right_ptr = v.size() - 1, pairs = 0, value_i, value_j, index_i, index_j;

  while(left_ptr < right_ptr) {

    int sum = v[left_ptr] + v[right_ptr];

    if(sum == target_sum) {

      // on the basis of values pairs must be different.

      // both pointers at edge.
      if(left_ptr == 0 && right_ptr == v.size() - 1) {
        value_i = v[left_ptr];
        value_j = v[right_ptr];
        pairs++;
        right_ptr--;
      }

      // not at edge.
      else if(v[left_ptr] != value_i || v[right_ptr] != value_j) {
        value_i = v[left_ptr];
        value_j = v[right_ptr];
        pairs++;
        right_ptr--;
      }

      else
        left_ptr++;

      // On the basis of index.
      // pairs++;
      // left_ptr++;
      // right_ptr--;
    }

    else if(sum < target_sum) {
      left_ptr++;
    }

    else if(sum > target_sum) {
      right_ptr--;
    }
  }

  if(pairs > 0) {
    cout << "Pairs found are : " << pairs << endl;
  }

  else cout << "No pairs found!!!" << endl;

}


int main()
{
  vector <int> vect;
  int sum, size;
  cout << "Enter the size : ";
  cin >> size;
  
  for (int i = 0 ; i < size ; i++)
    {
      int element;
      cin >> element;
      vect.push_back(element);
    }

  cout << "Enter the sum : ";
  cin >> sum;
  two_sum_optimised(vect , sum);
  // cout << "Number of pairs are : " << twoSum(sum, size, vect) << endl;
  return 0;
}
