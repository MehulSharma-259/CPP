# include <iostream>
# include <vector>
using namespace std;
int search(vector <int> &nums, int target)
{
    int i=0, k, high, low, mid, index = -1;
    while (nums[i] < nums[i + 1])
        i++;
    k= ++i;
  
    if (k != nums.size())
    {
      reverse(nums.begin(), nums.begin() + k);
      reverse(nums.begin() + k, nums.end());
      reverse(nums.begin(), nums.end());
    }

    cout << endl;
    high = nums.size() - 1; 
    low = 0;
    while ((high - low) >= 0)
    {
        mid = (high + low) / 2;
        
        if(nums[mid] == target)
        {
            index = mid;
            break; 
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }

    if (index != -1 && k != nums.size() && index >= (nums.size() - k))
        return (index - k);

    else if (index != -1 && k != nums.size() && index < (nums.size() - k))
        return (index + k);

    else 
        return index;
}
int main()
{
  vector <int> nums;
  int size,target;
  cout << "Enter the size : ";
  cin >> size;
  
  for (int i = 0 ; i < size ; i++)
    {
      int element;
      cout << "Enter the " << i << "th element : ";
      cin >> element;
      nums.push_back(element);
    }

  cout << "Enter the target element : ";
  cin >> target;
  cout << search(nums, target) << endl;
  
  return 0;
}