#include<bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int arr[], int n) {
    vector<int>temp;
    temp.push_back(arr[0]);
    for(int idx = 1 ; idx < n ; idx++) {
        if(arr[idx] > temp.back())
            temp.push_back(arr[idx]);

        else {
            // give the starting itr, ending itr, element return itr to the desired position
            // subtract by temp.begin() to get the idx.
            int i = lower_bound(temp.begin(), temp.end(), arr[idx]) - temp.begin();
            temp[i] = arr[idx];
        }
    }

    // print lcs logic.
    // declare dp and bt array.
    vector<int>dp(n, 1), bt(n, 0);
    // initially length of lis = 0, idx of lis = 0.
    int ans = 0, ansIdx = 0;
    // traverse the array.
    for(int i = 0 ; i < n ; i++) {
        // store i at each idx of bt.
        bt[i] = i;
        // traverse from 0 to i - 1.
        for(int j = 0 ; j < i ; j++) {

            // check if previous element smaller than curr
            // and length is max.
            if(arr[j] < arr[i] and dp[i] < 1 + dp[j]){
                // store the length.
                dp[i] = 1 + dp[j];
                // store the idx of previous element in bt.
                bt[i] = j;
                // if the length is max then store the maxlen and idx of maxlen.
                if(dp[i] > ans) {
                    ans = dp[i];
                    ansIdx = i;
                }
                
            }
        }
    }
    // for(auto i : bt)
    //     cout << i << " ";
    // cout << endl;
    // cout << ansIdx << endl;

    vector<int>lis;
    int i = ansIdx;
    lis.push_back(arr[i]);
    while(bt[i] != i) {
        i = bt[i];
        lis.push_back(arr[i]);
    }

    reverse(lis.begin(), lis.end());
    for(auto i : lis)
        cout << i << " ";
    cout << endl;

    return temp.size();
}
