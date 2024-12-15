#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
bool countSubsequences(int idx, int n, vector<int>& ds, int arr[], int tempSum, int& sum, int & ans) {
    if(idx >= n) {
        if(tempSum == sum) {
            for(auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }

        else {

            return false;    
        }
    }

    bool notPick = countSubsequences(idx + 1, n, ds, arr, tempSum, sum, ans);

    if(notPick)
        return true;

    tempSum = (tempSum + arr[idx]) % mod;
    ds.push_back(arr[idx]);
    bool pick = countSubsequences(idx + 1, n, ds, arr, tempSum, sum, ans);
    ds.pop_back();

    if(pick)
        return true;

    return false;

}


int perfectSum(int arr[], int n, int sum) {
    int tempSum = 0, idx = 0, ans = 0;
    vector<int> ds;
    countSubsequences(idx, n, ds, arr, tempSum, sum, ans);
    
    return ans;
}

int main() {

    int arr[] = {1, 2 ,1};
    int n = sizeof(arr) / sizeof(int);
    int sum = 2;
    perfectSum(arr, n, sum);

    return 0;
}