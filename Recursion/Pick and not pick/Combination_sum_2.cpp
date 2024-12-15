#include <bits/stdc++.h>
using namespace std;


void solve(int idx, int sum, vector<int>& temp, vector<int>& arr, int target,
        set<vector<int>>& ans) {
    
    if(idx >= arr.size() or sum > target) {
        
        if(sum == target) 
            ans.insert(temp);
        return;
        
    }

    // include the element.
    temp.push_back(arr[idx]);
    solve(idx + 1, sum + arr[idx], temp, arr, target, ans);
    // exclude the element.
    temp.pop_back();
    solve(idx + 1, sum, temp, arr, target, ans);

}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> temp;
    set<vector<int>> ans;
    solve(0, 0, temp, candidates, target, ans);
    vector<vector<int>> res(ans.begin(), ans.end());
    return res;
}  


int main() {


    // Example Input
    vector<int> candidates = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int target = 30;

    // Get the combination sum
    vector<vector<int>> result = combinationSum2(candidates, target);

    // Output the result
    cout << "Combinations for target " << target << ":" << endl;
    for (auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
