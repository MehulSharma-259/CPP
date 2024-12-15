#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int idx, vector<int>&temp, vector<int>&ans, vector<int>& arr,
unordered_map<int, vector<int>>& dp) {

    if(dp.find(idx) != dp.end())
        return dp[idx];

    if(idx == arr.size()){
        if(temp.size() > ans.size())
            ans = temp;

        return dp[idx] = ans;
    }

    vector<int>pick, notPick;

    if(temp.size() == 0 or arr[idx] % temp.back() == 0){
        temp.push_back(arr[idx]);
        pick = solve(idx + 1, temp, ans, arr, dp);
        temp.pop_back();
    }

    notPick = solve(idx + 1, temp, ans, arr, dp);

    if(pick.size() > notPick.size())
        return dp[idx] = pick;

    else
        return dp[idx] = notPick;

}

vector<int> divisibleSet(vector<int> &arr) {   

    sort(arr.begin(), arr.end());
    vector<int>temp, ans;
    unordered_map<int, vector<int>>dp;
    return solve(0, temp, ans, arr, dp);

}

int main() {
    
    return 0;
}