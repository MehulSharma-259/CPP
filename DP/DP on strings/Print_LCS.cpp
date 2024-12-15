#include <bits/stdc++.h>
using namespace std;

// Tabulation TC - O(n * m), SC - O(n * m).
// do shifting of indexes for tabulation method.
int solve(string& s, string& t, vector<vector<int>>& dp) {

	int n = s.size(), m = t.size();

	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {

			// matched character.
			if(s[i - 1] == t[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];

			// unmatched character.
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

		}
	}

	return dp[n][m];

}


int lcs(string s, string t){
	int n = s.size(), m = t.size();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	int ans = solve(s, t, dp);

    for(auto i : dp) {
        for(auto j : i) 
            cout << j << " ";
        cout << endl;
    }
    cout << endl;

    int i = n, j = m;
    string lcs;

    while(i > 0 and j > 0) {
        if(s[i - 1] == t[j - 1]) {
            // cout << s[i - 1] << " ";
            lcs.push_back(s[i - 1]);
            i--;
            j--;
        }

        else if(dp[i - 1][j] > dp[i][j - 1])
            i--;
        

        else
            j--;
    }

    reverse(lcs.begin(), lcs.end());
    cout << endl << "LCS is : " << lcs << endl;
    return ans;
}

int main() {

    cout << lcs("abcde", "bdgek");

    return 0;
}