#include <bits/stdc++.h>
using namespace std;

// update low to mid + 1 as we want a greater target to be our ans and we know that from low to mid our ans not exists in this range to low = mid + 1.
// update high to mid because as the mid target is greater than the target so it could be our ans so not exclude it from our search space so high = mid.

// int findLowerBound(vector<int>& arr, int target, int low, int high) {
//     int mid = low + (high - low) / 2;

//     while(low < high) {

//         if(arr[mid] == target)
//             return mid;

//         else if(arr[mid] < target)
//             low = mid + 1;

//         else
//             high = mid;

//         mid = low + (high - low) / 2;
//     }

//     return mid;
// }


// Best template for BS (range elimination)
int findLowerBound(vector<int>& arr, int element, int n) {

	int low = 0, high = n - 1;
    int mid = low + (high - low) / 2, ans = n;

    while(low <= high) {

		// ensure that any element which is greater than equal to target remains in search space.
		// in case of equal we get the idx of first element == target.
        if(arr[mid] >= element){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;

        mid = low + (high - low) / 2;
    }

    return ans;
}

int main() {

    vector<int> arr = {1, 4, 7};
    cout << findLowerBound(arr, 5, arr.size()) << endl;

    return 0;
}